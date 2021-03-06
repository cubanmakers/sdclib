/**
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  *
  */

/*
 *  CalibrationInfo.h
 *
 *  @Copyright (C) 2015, SurgiTAIX AG
 *  Author: besting, buerger, roehser
 */

/**
 * THIS FILE IS GENERATED AUTOMATICALLY! DO NOT MODIFY!
 *
 * YOUR CHANGES WILL BE OVERWRITTEN!
 *
 * USE THE DEFINITION FILES IN THE FOLDER "codegenerator" INSTEAD!
 */

#ifndef CALIBRATIONINFO_H_
#define CALIBRATIONINFO_H_

#include "SDCLib/Data/SDC/MDIB/SimpleTypesMapping.h"
#include "SDCLib/Data/SDC/SDC-fwd.h"
#include "DataModel/osdm-fwd.hxx"

namespace SDCLib {
namespace Data {
namespace SDC {

class CalibrationInfo
{
private:
	CalibrationInfo(const CDM::CalibrationInfo & object);
	operator CDM::CalibrationInfo() const;
	friend class ConvertFromCDM;
	friend class ConvertToCDM;
	friend class SDCProvider;
	friend class SDCConsumer;
	friend class MdState;
	friend class MdDescription;
public:
	CalibrationInfo(
	);
	CalibrationInfo(const CalibrationInfo& object);
	virtual ~CalibrationInfo() = default;

    void copyFrom(const CalibrationInfo& object);
    CalibrationInfo & operator=(const CalibrationInfo& object);

    typedef CDM::CalibrationInfo WrappedType;

	CalibrationInfo & setComponentCalibrationState(const CalibrationState & value);
	CalibrationState getComponentCalibrationState() const;
	bool getComponentCalibrationState(CalibrationState & out) const;
	bool hasComponentCalibrationState() const;

	CalibrationInfo & setType(const CalibrationType & value);
	CalibrationType getType() const;
	bool getType(CalibrationType & out) const;
	bool hasType() const;

	CalibrationInfo & setTime(const Timestamp & value);
	Timestamp getTime() const;
	bool getTime(Timestamp & out) const;
	bool hasTime() const;

	CalibrationInfo & addCalibrationDocumentation(const CalibrationDocumentation & value);
	std::vector<CalibrationDocumentation> getCalibrationDocumentationList() const;
	void clearCalibrationDocumentationList();

private:
	std::shared_ptr<CDM::CalibrationInfo> data = nullptr;
};

} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */
#endif /* CALIBRATIONINFO_H_ */
