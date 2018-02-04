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

	//member function declarations
	double getVoltage(void);
	void setCurrent (double I);
	void setResistance (double R);
};

double OhmsCalculation :: getVoltage(void)
{
	return current * resistance;
}
void OhmsCalculation :: setCurrent(double I)
{
	current = I;
}
void OhmsCalculation :: setResistance(double R)
{
	resistance = R;
}

int main() {

	OhmsCalculation Ohmsresult1;
	double voltage = 0.0;

	Ohmsresult1.setCurrent(0.03);
	Ohmsresult1.setResistance(100);

	voltage = Ohmsresult1.getVoltage();
	cout << "Voltage of Ohmsresult1 :"  << voltage;

	return 0;
}
