/*
 * Whip.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef WHIP_H_
#define WHIP_H_

#include "CondimentDecorator.h"

class Whip: public CondimentDecorator {
	Beverage* beverage;
public:
	Whip(Beverage *aBeverage):beverage(aBeverage){}
	virtual ~Whip();
	virtual std::string getDescription();
	virtual double cost();
};

#endif /* WHIP_H_ */
