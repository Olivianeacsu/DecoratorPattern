/*
 * Mocha.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef MOCHA_H_
#define MOCHA_H_

#include "CondimentDecorator.h"

class Mocha: public CondimentDecorator {
	Beverage* beverage;
public:
	Mocha(Beverage *aBeverage):beverage(aBeverage){}
	virtual ~Mocha();

	virtual std::string getDescription();
	virtual double cost();
};

#endif /* MOCHA_H_ */
