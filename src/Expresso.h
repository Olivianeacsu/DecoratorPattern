/*
 * Expresso.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */

#ifndef EXPRESSO_H_
#define EXPRESSO_H_

#include "Beverage.h"

class Expresso: public Beverage {
public:
	Expresso():Beverage("Expresso"){}
	virtual ~Expresso();
	virtual double cost();
};

#endif /* EXPRESSO_H_ */
