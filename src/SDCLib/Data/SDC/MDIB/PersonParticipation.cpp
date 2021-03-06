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
 *  PersonParticipation.cpp
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

#include "SDCLib/Data/SDC/MDIB/PersonParticipation.h"
#include "SDCLib/Data/SDC/MDIB/ConvertToCDM.h"
#include "SDCLib/Data/SDC/MDIB/ConvertFromCDM.h"
#include "SDCLib/Data/SDC/MDIB/Defaults.h"

#include "DataModel/osdm.hxx"

#include "SDCLib/Data/SDC/MDIB/CodedValue.h"
#include "SDCLib/Data/SDC/MDIB/InstanceIdentifier.h"
#include "SDCLib/Data/SDC/MDIB/BaseDemographics.h"

namespace SDCLib {
namespace Data {
namespace SDC {


PersonParticipation::PersonParticipation(
) : data(Defaults::PersonParticipationInit(
))
{}

PersonParticipation::operator CDM::PersonParticipation() const {
	return *data;
}

PersonParticipation::PersonParticipation(const CDM::PersonParticipation & object)
: data(new CDM::PersonParticipation(object))
{ }

PersonParticipation::PersonParticipation(const PersonParticipation & object)
: data(std::make_shared<CDM::PersonParticipation>(*object.data))
{ }

void PersonParticipation::copyFrom(const PersonParticipation & object) {
	data = std::make_shared<CDM::PersonParticipation>(*object.data);
}

PersonParticipation & PersonParticipation:: operator=(const PersonParticipation& object) {
	copyFrom(object);
	return *this;
}


PersonParticipation & PersonParticipation::setName(const BaseDemographics & value) {
	data->setName(ConvertToCDM::convert(value));
	return *this;
}

bool PersonParticipation::getName(BaseDemographics & out) const {
	if (data->getName().present()) {
		out = ConvertFromCDM::convert(data->getName().get());
		return true;
	}
	return false;
}

BaseDemographics PersonParticipation::getName() const {
	return ConvertFromCDM::convert(data->getName().get());
}

bool PersonParticipation::hasName() const {
	return data->getName().present();
}

PersonParticipation & PersonParticipation::addIdentification(const InstanceIdentifier & value) {
	data->getIdentification().push_back(ConvertToCDM::convert(value));
	return *this;
}

std::vector<InstanceIdentifier> PersonParticipation::getIdentificationList() const {
	std::vector<InstanceIdentifier> result;
	result.reserve(data->getIdentification().size());
	for (const auto & value: data->getIdentification()) {
		result.push_back(ConvertFromCDM::convert(value));
	}
	return result;
}

void PersonParticipation::clearIdentificationList() {
	data->getIdentification().clear();
}

PersonParticipation & PersonParticipation::addRole(const CodedValue & value) {
	data->getRole().push_back(ConvertToCDM::convert(value));
	return *this;
}

std::vector<CodedValue> PersonParticipation::getRoleList() const {
	std::vector<CodedValue> result;
	result.reserve(data->getRole().size());
	for (const auto & value: data->getRole()) {
		result.push_back(ConvertFromCDM::convert(value));
	}
	return result;
}

void PersonParticipation::clearRoleList() {
	data->getRole().clear();
}


} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */

