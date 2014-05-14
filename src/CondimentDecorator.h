/*
 * CondimentDecorator.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef CONDIMENTDECORATOR_H_
#define CONDIMENTDECORATOR_H_

#include "Beverage.h"

class CondimentDecorator: public Beverage {
public:
	CondimentDecorator():Beverage("Unknown beverage"){}
	virtual ~CondimentDecorator();

	virtual std::string getDescription()=0;
};

#endif /* CONDIMENTDECORATOR_H_ */
