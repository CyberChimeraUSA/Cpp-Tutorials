#include <iostream>

using namespace std;


int main(void) {

	int voltage[5],v;
	double total = 0, mean;

	cout << "Enter a voltage: " << endl;
	for (v = 0; v < 5; v++){
		cin >> voltage[v];
		cout << "Voltage Entered: " << voltage[v] << endl;
	}
	for(v = 0; v < 5; v++)
		total = total+ voltage [v];

	mean = total/5;

	cout << "Mean of Voltage : " << mean << endl;

   return 0;
}
