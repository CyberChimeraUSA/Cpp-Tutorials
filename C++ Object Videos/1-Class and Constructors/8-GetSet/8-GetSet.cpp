#include <iostream>
#include <iomanip>

using namespace std;

class OhmsLaw
{
private:
	float current;
	float resistance;
public:
	void setParams(float i, float r)
	{
		current = i;
		resistance = r;
	}
	void getParams()
	{
		cout << "\nEnter current ";
		cin >> current;
		cout <<"Enter resistance ";
		cin >> resistance;
	}
	void showVoltage()
	{
		cout << current << " * " << resistance << " = " << current*resistance<< " v";
	}
};

int main ()
{
	OhmsLaw volt1, volt2;
	volt1.setParams(0.001, 5);
	volt2.getParams();

	cout << "\nvolt1: ";
	volt1.showVoltage();
	cout << "\nvolt2: ";
	volt2.showVoltage();
	cout << endl;

	return 0;
}

