#include <iostream>
using namespace std;

class Engineering {
    public:
		void setVoltage(double v);
		double getVoltage(void);
	
		Engineering(double v);
		double voltage;
};

Engineering::Engineering(double v){
		cout << "Creating the object (using parameterized constructor) : " << v << "\n";
		voltage = v;
}
void Engineering::setVoltage(double v){
		voltage = v;
	}
double Engineering::getVoltage(void){
	return voltage;
}
int main()
{
	Engineering engineering (9.8);
	cout << "Voltage of Circuit : "<< engineering.getVoltage() << "\n";


	engineering.setVoltage(5.3);
	cout << "Voltage of Circuit : "<< engineering.getVoltage() << "\n";

	return 0;
}
