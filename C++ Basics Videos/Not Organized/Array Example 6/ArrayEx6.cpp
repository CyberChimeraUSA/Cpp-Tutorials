#include <iostream>

using namespace std;

void voltageCalculator (double [3]);

int main(void) {

	int x;
			double resistanceArray[3] = {1, 2, 3};

			for(x=0; x < 3; x++)

						{
							cout << "Matrix Location: " << x  << " value: "<< resistanceArray[x] << endl;

						}
			voltageCalculator(resistanceArray);

   return 0;
}

void voltageCalculator(double inputArray[3])
{
	int a;

	for (a =0; a < 3 ; a++)
	{
		double voltage, current = 0.1;
		voltage = current *inputArray[a];
		cout << voltage << endl;


	}
}
