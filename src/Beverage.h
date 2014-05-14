/*
 * Beverage.h
 *
 *  Created on: May 11, 2014
 *      Author: oli
 */
#include <string>

#ifndef BEVERAGE_H_
#define BEVERAGE_H_

class Beverage {
	std::string m_description;
protected:
	Beverage(std::string aDescription):m_description(aDescription){}
public:
	virtual ~Beverage();

	virtual std::string getDescription();
	virtual double cost()=0; // pure virtual function

};

#endif /* BEVERAGE_H_ */
