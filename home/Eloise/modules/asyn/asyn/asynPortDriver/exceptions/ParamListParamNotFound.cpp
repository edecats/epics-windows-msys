/*
 * ParamListParamNotFound.cpp
 *
 *  Created on: Dec 15, 2011
 *      Author: hammonds
 */

#include "ParamListParamNotFound.h"

ParamListParamNotFound::ParamListParamNotFound(const std::string& description):
    std::logic_error(description){
}

