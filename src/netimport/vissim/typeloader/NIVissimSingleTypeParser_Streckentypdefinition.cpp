/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2019 German Aerospace Center (DLR) and others.
// This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v2.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v20.html
// SPDX-License-Identifier: EPL-2.0
/****************************************************************************/
/// @file    NIVissimSingleTypeParser_Streckentypdefinition.cpp
/// @author  Daniel Krajzewicz
/// @author  Michael Behrisch
/// @date    Thu, 6 Mar 2003
/// @version $Id$
///
//
/****************************************************************************/



// ===========================================================================
// included modules
// ===========================================================================
#include <config.h>

#include <iostream>
#include <utils/common/StringUtils.h>
#include "../NIImporter_Vissim.h"
#include "NIVissimSingleTypeParser_Streckentypdefinition.h"


// ===========================================================================
// method definitions
// ===========================================================================
NIVissimSingleTypeParser_Streckentypdefinition::NIVissimSingleTypeParser_Streckentypdefinition(NIImporter_Vissim& parent)
    : NIImporter_Vissim::VissimSingleTypeParser(parent) {}


NIVissimSingleTypeParser_Streckentypdefinition::~NIVissimSingleTypeParser_Streckentypdefinition() {}


bool
NIVissimSingleTypeParser_Streckentypdefinition::parse(std::istream& from) {
    readUntil(from, "default");
    std::string tag;
    from >> tag;
    return true;
}



/****************************************************************************/

