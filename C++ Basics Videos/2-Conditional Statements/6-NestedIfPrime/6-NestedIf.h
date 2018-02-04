#include <iostream>
#include <iomanip>

using namespace std;

#include <process.h>
int main ()
{

	unsigned long x, y;

	cout << "Enter a Number: ";
	cin >> x;

	for(y = 2; y <= x/2; y++)
		if(x%y == 0)
		{
			cout << "Not Prime, Divisible by " << y << endl;
		}
		cout << "Prime";
		return 0;
	return 0;
}

