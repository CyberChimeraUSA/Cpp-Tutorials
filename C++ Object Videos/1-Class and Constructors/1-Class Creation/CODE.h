//============================================================================
// Name        : SimpleClassC++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class OhmsCalculation
{
public:
	double current;
	double resistance;

};


int main() {
	OhmsCalculation Ohmsresult1;
	double voltage = 0.0;

	Ohmsresult1.current = 0.003;
	Ohmsresult1.resistance = 100;

	voltage = Ohmsresult1.current * Ohmsresult1.resistance;
	cout << "Voltage is : " << voltage;


	return 0;
}
