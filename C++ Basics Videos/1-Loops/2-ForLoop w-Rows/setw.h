#include <iostream>
#include <iomanip>

using namespace std;
//basic for loop
int main ()
{
	int x;

	for (x = 1; x < 20; x++)
	{

		cout << setw(4) << "Row: " << x;
		int square = x * x;
		cout << setw(6) << square;
		int cube = x*x*x;
		cout << setw(8)<<cube;
		cout << endl;

	}

	return 0;
}

