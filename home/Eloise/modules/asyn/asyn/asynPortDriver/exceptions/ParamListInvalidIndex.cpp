/*
 * ParamListInvalidIndex.cpp
 *
 *  Created on: Dec 15, 2011
 *      Author: hammonds
 */

#include "ParamListInvalidIndex.h"

ParamListInvalidIndex::ParamListInvalidIndex(const std::string& description):
    std::logic_error(description){

}

