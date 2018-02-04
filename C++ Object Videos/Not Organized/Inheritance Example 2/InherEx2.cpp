#include <iostream>
using namespace std;
// Base class for Values
class ParentClass {
	public:
	void setCurrent(double i) {
		current = i;
	}
	void setResistance(double r) {
		resistance = r;
	}

	double current;
	double resistance;
};

class SubClassPower : public ParentClass {
	public:
		double getPower(double Voltage) {
			return Voltage * current;
		}
	};

class SubSubClassVoltage: public SubClassPower {
	public:
	double getVoltage() {
		return (current * resistance);
	}
};
int main(void) {

SubSubClassVoltage Volt;
double ohmsLawResult;

	Volt.setCurrent(0.03);
	Volt.setResistance(100);
	ohmsLawResult = Volt.getVoltage();

cout << "Voltage: " << Volt.getVoltage() << endl;
cout << "Power: " << Volt.getPower(ohmsLawResult) << endl;
return 0;
}
