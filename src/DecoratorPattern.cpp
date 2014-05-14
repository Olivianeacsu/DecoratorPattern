//============================================================================
// Name        : DecoratorPattern.cpp
// Author      : Olivia Neacsu
// Version     :
// Copyright   : Olivia - no copyright needed
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Beverage.h"
#include"Expresso.h"
#include"HouseBlend.h"
#include"Soy.h"
#include"Mocha.h"

using namespace std;

int main() {
	cout << "Decorator Pattern" << endl; // prints Decorator Pattern

	Beverage* firstBeverage = new Expresso();
	cout << "First beverage: " << firstBeverage->getDescription() << "  Euro " << firstBeverage->cost() <<endl;
	delete firstBeverage;

	Beverage* secondBeverage = new HouseBlend();
	secondBeverage = new Soy(secondBeverage);
	secondBeverage = new Mocha(secondBeverage);
	cout << "Second beverage: " << secondBeverage->getDescription() << "  Euro " << secondBeverage->cost()<<endl;
	delete secondBeverage;


	return 0;
}
