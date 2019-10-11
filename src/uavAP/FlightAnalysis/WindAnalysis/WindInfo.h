////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2018 University of Illinois Board of Trustees
//
// This file is part of uavAP.
//
// uavAP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// uavAP is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////////////
/*
 * WindInfo.h
 *
 *  Created on: Feb 8, 2019
 *      Author: mirco
 */

#ifndef UAVAP_FLIGHTANALYSIS_WINDANALYSIS_WINDINFO_H_
#define UAVAP_FLIGHTANALYSIS_WINDANALYSIS_WINDINFO_H_

#include "uavAP/Core/LinearAlgebra.h"

struct WindInfo
{
	Vector3 velocity;
};

namespace dp
{
template<class Archive, typename T>
inline void
serialize(Archive& ar, WindInfo& t)
{
	ar & t.velocity;
}
}

#endif /* UAVAP_FLIGHTANALYSIS_WINDANALYSIS_WINDINFO_H_ */