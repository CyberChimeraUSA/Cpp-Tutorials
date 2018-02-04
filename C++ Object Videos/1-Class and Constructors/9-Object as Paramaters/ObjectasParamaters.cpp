
#include <iostream>
using namespace std;

class Engineering{
private:
	double resistance;
	double current;
	double voltage;
public:
Engineering():resistance(1.0),current(1.0)
	{}
Engineering(float r, float i) : resistance(r),current(i)
  {}
void getParams()
{
	cout << "Enter resistance: "<<endl;
	cin >> resistance;
	cout << "Enter current: " << endl;
	cin >> current;
	cout << endl;
}
void showParams()
{
	cout << resistance << " ohms " << "  " <<current << " amps " <<endl;
	//cout << endl;
}
void add_voltages(Engineering, Engineering);
float voltageCalculator(){
	return current * resistance;
}
};
void Engineering::add_voltages(Engineering ob1, Engineering ob3)
{
voltage = 	ob1.voltageCalculator() + ob3.voltageCalculator();
cout << "Voltage Addition Method: " << voltage << endl;
}


int main() {
	Engineering ob1, ob2;
	Engineering ob3(1000, 0.2);

	ob1.getParams();
	cout <<"Voltage from ob1 (user input): " << ob1.voltageCalculator() << endl;
	cout <<"Voltage from ob3 (default)" << ob3.voltageCalculator() << endl;

	ob2.add_voltages(ob1, ob3);

	ob1.showParams();
	cout << endl;
	ob3.showParams();
	cout << endl;
	ob2.showParams();

	return 0;
}
