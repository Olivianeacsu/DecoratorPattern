/*
 * Milk.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef MILK_H_
#define MILK_H_

#include "CondimentDecorator.h"

class Milk: public CondimentDecorator {
	Beverage* beverage;
public:
	Milk(Beverage *aBeverage):beverage(aBeverage){}
	virtual ~Milk();

	virtual std::string getDescription();
	virtual double cost();

};

#endif /* MILK_H_ */
