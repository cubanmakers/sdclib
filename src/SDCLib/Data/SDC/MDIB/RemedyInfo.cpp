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
 *  RemedyInfo.cpp
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

#include "SDCLib/Data/SDC/MDIB/RemedyInfo.h"
#include "SDCLib/Data/SDC/MDIB/ConvertToCDM.h"
#include "SDCLib/Data/SDC/MDIB/ConvertFromCDM.h"
#include "SDCLib/Data/SDC/MDIB/Defaults.h"

#include "DataModel/osdm.hxx"

#include "SDCLib/Data/SDC/MDIB/LocalizedText.h"

namespace SDCLib {
namespace Data {
namespace SDC {


RemedyInfo::RemedyInfo(
) : data(Defaults::RemedyInfoInit(
))
{}

RemedyInfo::operator CDM::RemedyInfo() const {
	return *data;
}

RemedyInfo::RemedyInfo(const CDM::RemedyInfo & object)
: data(new CDM::RemedyInfo(object))
{ }

RemedyInfo::RemedyInfo(const RemedyInfo & object)
: data(std::make_shared<CDM::RemedyInfo>(*object.data))
{ }

void RemedyInfo::copyFrom(const RemedyInfo & object) {
	data = std::make_shared<CDM::RemedyInfo>(*object.data);
}

RemedyInfo & RemedyInfo:: operator=(const RemedyInfo& object) {
	copyFrom(object);
	return *this;
}


RemedyInfo & RemedyInfo::addDescription(const LocalizedText & value) {
	data->getDescription().push_back(ConvertToCDM::convert(value));
	return *this;
}

std::vector<LocalizedText> RemedyInfo::getDescriptionList() const {
	std::vector<LocalizedText> result;
	result.reserve(data->getDescription().size());
	for (const auto & value: data->getDescription()) {
		result.push_back(ConvertFromCDM::convert(value));
	}
	return result;
}

void RemedyInfo::clearDescriptionList() {
	data->getDescription().clear();
}


} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */

