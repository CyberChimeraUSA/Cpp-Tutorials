#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double i, r,v;

	cout << "Enter a resistance: "<< endl;
	cin >> r;
	cout << "Enter a current: " << endl;
	cin >> i;
	if(i > 15)
	{
		cout << "current is to high!!!";

	}
	else if (i == 15)
	{
		v = i*r;
		cout << "Current is at the limit " << endl;
		cout << "Voltage is : " << v << endl;
	}
	else
	{
		v = i*r;
		cout << "Voltage is : " << v << endl;
	}
				return 0;
}

