
#include "OSCLib/OSCLibrary.h"
#include "OSCLib/Data/OSCP/OSCPConsumer.h"
#include "OSCLib/Data/OSCP/OSCPProvider.h"
#include "OSCLib/Data/OSCP/OSCPServiceManager.h"
#include "OSCLib/Data/OSCP/MDIB/ChannelDescriptor.h"
#include "OSCLib/Data/OSCP/MDIB/CodedValue.h"
#include "OSCLib/Data/OSCP/MDIB/HydraMDSDescriptor.h"
#include "OSCLib/Data/OSCP/MDIB/LocalizedText.h"
#include "OSCLib/Data/OSCP/MDIB/MDDescription.h"
#include "OSCLib/Data/OSCP/MDIB/NumericMetricDescriptor.h"
#include "OSCLib/Data/OSCP/MDIB/SystemContext.h"
#include "OSCLib/Data/OSCP/MDIB/SystemMetaData.h"
#include "OSCLib/Data/OSCP/MDIB/VMDDescriptor.h"
#include "OSCLib/Util/DebugOut.h"
#include "OSCLib/Util/Task.h"
#include "../AbstractOSCLibFixture.h"
#include "../UnitTest++/src/UnitTest++.h"

#include "Poco/Mutex.h"
#include "Poco/ScopedLock.h"

using namespace OSCLib;
using namespace OSCLib::Util;
using namespace OSCLib::Data::OSCP;

namespace OSCLib {
namespace Tests {
namespace MultiOSCP {

class OSCPTestDeviceProvider : public OSCPProvider {
public:

    OSCPTestDeviceProvider(const std::size_t number, const std::size_t metricCount) : epr(number), metrics(metricCount) {
    	setEndpointReference(std::string("UDI_") + std::to_string(epr));
    	init();
    }

    void init() {

        // Location context
        SystemContext sc;

        // Channel
        ChannelDescriptor testChannel;
        testChannel.setIntendedUse(IntendedUse::MEDICAL_A);
        for (std::size_t i = 0; i < metrics; i++) {
        	NumericMetricDescriptor nmd;
    		nmd.setMetricCategory(MetricCategory::MEASUREMENT)
               .setAvailability(MetricAvailability::CONTINUOUS)
    		   .setType(
    				CodedValue()
    				.setCodeId("MDCX_CODE_ID_WEIGHT")
    				.addConceptDescription(LocalizedText().set("Current weight")))
    	       .setHandle("handle_cur" + std::to_string(i));
    		testChannel.addMetric(nmd);
        }

        // VMD
        VMDDescriptor testVMD;
        testVMD.addChannel(testChannel);

        // MDS
        HydraMDSDescriptor mds;
        mds
			.setMetaData(
					SystemMetaData()
					.addManufacturer(
						LocalizedText()
						.set("SurgiTAIX AG"))
					.addModelName(
						LocalizedText()
						.set("EndoTAIX"))
					.addModelNumber("1")
					.addSerialNumber("1234")
					)
			.setContext(sc)
			.setType(
                CodedValue()
                .setCodingSystemId("OR.NET.Codings")
        		.setCodeId("MDCX_CODE_ID_MDS"));

        mds.addVMD(testVMD);

        addHydraMDS(mds);
    }

private:
    const std::size_t epr;
    const std::size_t metrics;
};

} /* namespace MultiOSCP */
} /* namespace Tests */
} /* namespace OSCLib */

struct FixtureMultiOSCP : Tests::AbstractOSCLibFixture {
	FixtureMultiOSCP() : AbstractOSCLibFixture("FixtureMultiOSCP", Util::DebugOut::Error, 8000) {}
};

SUITE(OSCP) {
TEST_FIXTURE(FixtureMultiOSCP, multioscp)
{
	try
	{
		std::size_t providerCount(10);
		std::size_t metricCount = 10;
		std::vector<std::shared_ptr<Tests::MultiOSCP::OSCPTestDeviceProvider>> providers;

		for (std::size_t i = 0; i < providerCount; i++) {
			std::shared_ptr<Tests::MultiOSCP::OSCPTestDeviceProvider> p(new Tests::MultiOSCP::OSCPTestDeviceProvider(i, metricCount));
			providers.push_back(p);
			p->startup();
		}

        Poco::Thread::sleep(2000);

        DebugOut(DebugOut::Default, std::cout, "multioscp") << "Starting discovery test...";

        OSCPServiceManager sm;
        std::vector<std::shared_ptr<OSCPConsumer>> consumers = sm.discoverOSCP();
        CHECK_EQUAL(providerCount, consumers.size());
        for (auto & nextConsumer : consumers)
        	DebugOut(DebugOut::Default, std::cout, "multioscp") << "Found " << nextConsumer->getEndpointReference();

        Poco::Thread::sleep(2000);

        for (auto & next : consumers) {
        	next->disconnect();
        }
        for (auto & next : providers) {
        	next->shutdown();
        }
    } catch (char const* exc) {
		DebugOut(DebugOut::Default, std::cerr, "multioscp") << exc;
	} catch (...) {
		DebugOut(DebugOut::Default, std::cerr, "multioscp") << "Unknown exception occurred!";
	}
	DebugOut::closeLogFile();
}
}
