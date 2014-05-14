/*
 * DarkRoast.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef DARKROAST_H_
#define DARKROAST_H_

#include "Beverage.h"

class DarkRoast: public Beverage {
public:
	DarkRoast():Beverage("Dark Roast"){}
	virtual ~DarkRoast();
	virtual double cost();
};

#endif /* DARKROAST_H_ */
