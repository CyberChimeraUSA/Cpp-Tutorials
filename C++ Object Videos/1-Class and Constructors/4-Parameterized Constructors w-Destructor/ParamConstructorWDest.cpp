#include <iostream>
using namespace std;

class Engineering {

public:
			void setVoltage(double v);
			double getVoltage(void);
			//this is the constructor, takes a double value
			Engineering(double v);
			~Engineering();
			double voltage;

};

Engineering::Engineering(double v){
		cout << "Creating the object (using parameterized constructor) : " << v << "\n";
		voltage = v;
}
Engineering::~Engineering(void)
{
	cout <<"Deleting object";
}

//generate our two methods
void Engineering::setVoltage(double v){
		voltage = v;
	}
double Engineering::getVoltage(void){
	return voltage;
}

int main()
{

		//set value to constructor
		Engineering engineering (9.8);
		cout << "Voltage of Circuit : "<< engineering.getVoltage() << "\n";

		//set value by calling method
		engineering.setVoltage(5.3);
		cout << "Voltage of Circuit : "<< engineering.getVoltage() << "\n";

		return 0;
}
