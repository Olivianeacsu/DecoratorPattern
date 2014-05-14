/*
 * Decaf.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef DECAF_H_
#define DECAF_H_

#include "Beverage.h"

class Decaf: public Beverage {
public:
	Decaf():Beverage("Decaf"){}
	virtual ~Decaf();
	virtual double cost();
};

#endif /* DECAF_H_ */
