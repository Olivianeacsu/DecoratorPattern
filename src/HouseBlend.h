/*
 * HouseBlend.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef HOUSEBLEND_H_
#define HOUSEBLEND_H_

#include "Beverage.h"

class HouseBlend: public Beverage {
public:
	HouseBlend():Beverage("House Blend Coffee"){}
	virtual ~HouseBlend();
	virtual double cost();
};

#endif /* HOUSEBLEND_H_ */
