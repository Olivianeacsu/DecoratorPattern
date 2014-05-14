/*
 * Soy.cpp
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#include "Soy.h"


Soy::~Soy() {
	// TODO Auto-generated destructor stub
}

std::string Soy::getDescription(){
	return beverage->getDescription() + ", Soy";
}

double Soy::cost(){
	return .25 + beverage->cost();
}
