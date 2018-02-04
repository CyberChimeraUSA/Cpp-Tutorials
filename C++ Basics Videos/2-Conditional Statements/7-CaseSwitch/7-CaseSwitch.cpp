
#include <iostream>
using namespace std;

int main() {
	int parameter;
	double current;
	cout << "Enter a current: ";
	cin >> current;
	cout <<"1: Current is 0"<<endl
			<<"2:Current is less than 15"<<endl
			<<"3:Current is greater than 15"<<endl;
	cin >> parameter;
	switch(parameter)
	{
	case 1:
		cout << "No Current\n";
		break;
	case 2:
		cout << "Current is safe\n";
		break;
	case 3:
		cout << "Current is unsafe \n";
		break;

	default:
		cout << "Enter a correct parameter";
	}
	return 0;
}
