
#include <iostream>
using namespace std;

struct ohms{
	int resistance;
	float current;
};

int main() {
		ohms parameters1 = {1000, 0.01};
		ohms parameters2;

		float voltage;

			cout << "Resistance: " << parameters1.resistance << endl;
			cout <<"Current: " << parameters1.current << endl;
			voltage = parameters1.resistance * parameters1.current;
			cout <<"Voltage: "<< voltage << endl;
			cout<<endl;
			parameters2 = parameters1;
			cout << "Resistance 2: " << parameters2.resistance << endl;
			cout <<"Current 2: " << parameters2.current << endl;
			voltage = parameters2.resistance * parameters2.current;
			cout <<"Voltage 2: "<< voltage << endl;
			cout<<endl;

	return 0;
}
