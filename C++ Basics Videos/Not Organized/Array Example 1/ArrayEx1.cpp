#include <iostream>

using namespace std;



int main(void) {

	int voltage[5];
	int v;
	for (v = 0; v < 5; v++){
		cout << "Enter a voltage: ";
		cin >> voltage[v];
	}
	for (v=0; v < 5; v++)
		cout << "Voltage Entered: " << voltage[v] << endl;



   return 0;
}
