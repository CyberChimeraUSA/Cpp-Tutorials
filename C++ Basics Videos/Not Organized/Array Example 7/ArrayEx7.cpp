#include <iostream>

using namespace std;

void voltageCalculator (double [3][3]);
int main(void) {
	int x, y;
		double resistanceArray[3][3] = {{1,2,3},{4,5,6},{7,8,9} };

		for(x=0; x < 3; x++)
					for(y=0; y < 3; y++)
					{
						cout << "Matrix Location: " << x <<"," << y << " value: "<< resistanceArray[x][y] << endl;

					}
		voltageCalculator(resistanceArray);

   return 0;
}

void voltageCalculator(double inputArray[3][3])
{
	int a, b;

	for (a =0; a < 3 ; a++)
		for (b = 0; b < 3; b++)
	{
		double voltage, current = 0.1;
		voltage = current *inputArray[a][b];
		cout << voltage << endl;


	}
}
