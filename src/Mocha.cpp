/*
 * Mocha.cpp
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#include "Mocha.h"

Mocha::~Mocha() {
	// TODO Auto-generated destructor stub
}

std::string Mocha::getDescription(){
	return beverage->getDescription() + ", Mocha";
}

double Mocha::cost(){
	return .30 + beverage->cost();
}
