#include <iostream>

using namespace std;
struct resistor
{
	int powerMax;
	int tempMax;
	int resistance;
	float percentVariation;
};


int main(void) {

	int x;
	resistor parameters[4];

	for(x=0; x != 2 ;x++ )
	{
		cout << "Enter Resistance: " << endl;
		cin >> parameters[x].resistance;
		cout << "Enter a Temperature Max: " << endl;
		cin >> parameters[x].tempMax;
		cout << "Enter a Power Max: " << endl;
		cin >> parameters[x].powerMax;
		cout << "Enter a Percentage Variance: " << endl;
		cin >> parameters[x].percentVariation;
	}
cout << endl;
for(x=0; x != 2 ;x++ )
{
	cout << "Resistance Entered: " << parameters[x].resistance << endl;
	cout << "Temperature Entered: "<< parameters[x].tempMax << endl;
	cout << "Power Entered: " << parameters[x].tempMax << endl;
	cout <<"Percentage Variance: " << parameters[x].percentVariation << endl;
}
   return 0;
}


