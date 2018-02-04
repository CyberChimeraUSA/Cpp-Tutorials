
#include <iostream>
using namespace std;

struct ohms{
	float resistance;
	float current;
	float seconds;
};

struct joules{
	ohms watts;
};


int main() {
	joules parameters1;
	float voltage, power;

	parameters1.watts.seconds = 2;
	parameters1.watts.current = 0.05;
	parameters1.watts.resistance = 5000;

	voltage = parameters1.watts.current * parameters1.watts.resistance;
	power = voltage*parameters1.watts.current;
	parameters1.watts.seconds = power * parameters1.watts.seconds ;

	cout << "Time : " << parameters1.watts.seconds << endl;
	cout << "Current : " << parameters1.watts.current << endl;
	cout << "Resistance : " << parameters1.watts.resistance << endl;
	cout << "Power : " << power << endl;
	cout << "Joules : " << parameters1.watts.seconds <<endl;
	return 0;
}
