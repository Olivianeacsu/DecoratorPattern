/*
 * Milk.cpp
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#include "Milk.h"


Milk::~Milk() {
	// TODO Auto-generated destructor stub
}

std::string Milk::getDescription(){
	return beverage->getDescription() + ", Milk";
}

double Milk::cost(){
	return .10 + beverage->cost();
}
