/*
 * Soy.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef SOY_H_
#define SOY_H_

#include "CondimentDecorator.h"

class Soy: public CondimentDecorator {
	Beverage* beverage;
public:
	Soy(Beverage *aBeverage):beverage(aBeverage){}
	virtual ~Soy();

	virtual std::string getDescription();

	virtual double cost();
};

#endif /* SOY_H_ */
