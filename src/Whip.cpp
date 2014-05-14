/*
 * Whip.cpp
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#include "Whip.h"

Whip::~Whip() {
	// TODO Auto-generated destructor stub
}

std::string Whip::getDescription(){
	return beverage->getDescription() + ", Whip";
}

double Whip::cost(){
	return .35 + beverage->cost();
}
