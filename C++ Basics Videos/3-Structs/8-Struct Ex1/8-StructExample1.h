
#include <iostream>
using namespace std;

struct ohms{
	int resistance;
	float current;
};
int main() {
	ohms parameters1;
	float voltage;
	parameters1.resistance = 500;
	parameters1.current = 0.01;

	cout << "Resistance: " << parameters1.resistance << endl;
	cout <<"Current: " << parameters1.current << endl;
	voltage = parameters1.resistance * parameters1.current;
	cout <<"Voltage: "<< voltage << endl;


	return 0;
}
