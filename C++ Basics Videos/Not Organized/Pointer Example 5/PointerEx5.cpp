#include <iostream>
#include<string>

using namespace std;

int main(void) {
	void voltage(double*);
	double current[5] = {2, 7, 12, 1, 10};
	cout << "Resistance is : 5" << endl;
	voltage(current);

	for (int x = 0; x < 5; x++){
		cout << "Element #: " << x << " "
		 << "Voltage is: " << current[x] << endl;
	}


   return 0;

}
void voltage(double* x)
{
	for (int i =0; i < 5; i++)
	*x++ *= 5;
}
