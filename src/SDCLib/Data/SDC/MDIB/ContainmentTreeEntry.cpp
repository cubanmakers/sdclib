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
 *  ContainmentTreeEntry.cpp
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

#include "SDCLib/Data/SDC/MDIB/ContainmentTreeEntry.h"
#include "SDCLib/Data/SDC/MDIB/ConvertToCDM.h"
#include "SDCLib/Data/SDC/MDIB/ConvertFromCDM.h"
#include "SDCLib/Data/SDC/MDIB/Defaults.h"

#include "DataModel/osdm.hxx"

#include "SDCLib/Data/SDC/MDIB/CodedValue.h"

namespace SDCLib {
namespace Data {
namespace SDC {


ContainmentTreeEntry::ContainmentTreeEntry(
) : data(Defaults::ContainmentTreeEntryInit(
))
{}

ContainmentTreeEntry::operator CDM::ContainmentTreeEntry() const {
	return *data;
}

ContainmentTreeEntry::ContainmentTreeEntry(const CDM::ContainmentTreeEntry & object)
: data(new CDM::ContainmentTreeEntry(object))
{ }

ContainmentTreeEntry::ContainmentTreeEntry(const ContainmentTreeEntry & object)
: data(std::make_shared<CDM::ContainmentTreeEntry>(*object.data))
{ }

void ContainmentTreeEntry::copyFrom(const ContainmentTreeEntry & object) {
	data = std::make_shared<CDM::ContainmentTreeEntry>(*object.data);
}

ContainmentTreeEntry & ContainmentTreeEntry:: operator=(const ContainmentTreeEntry& object) {
	copyFrom(object);
	return *this;
}


ContainmentTreeEntry & ContainmentTreeEntry::setType(const CodedValue & value) {
	data->setType(ConvertToCDM::convert(value));
	return *this;
}

bool ContainmentTreeEntry::getType(CodedValue & out) const {
	if (data->getType().present()) {
		out = ConvertFromCDM::convert(data->getType().get());
		return true;
	}
	return false;
}

CodedValue ContainmentTreeEntry::getType() const {
	return ConvertFromCDM::convert(data->getType().get());
}

bool ContainmentTreeEntry::hasType() const {
	return data->getType().present();
}


} /* namespace SDC */
} /* namespace Data */
} /* namespace SDCLib */

