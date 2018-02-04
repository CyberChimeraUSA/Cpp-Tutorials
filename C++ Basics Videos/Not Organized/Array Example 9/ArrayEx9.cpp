#include <iostream>

using namespace std;
class Voltage
{
private:
	double current;
	double resistance;
public:
	void getParam()
	{
		cout << "Enter a current: " << endl;
		cin >> current;
		cout << "Enter a resistance: "<< endl;
		cin >> resistance;
	}
	void showVoltage()
	{
		cout << current* resistance <<endl;
	}
};


int main(void) {
Voltage total[50];
int i = 0;
char answer;

do
{
	cout << "Parameter Number " << i+1 << endl;
	total[i++].getParam();
	cout << "Enter another 'y' or 'n' ";
	cin >> answer;
}while (answer != 'n');

for (int x = 0; x < i ; x++)
{
	cout << " Voltage from Parameter " << x+1 << endl;
	total[x].showVoltage();
}

   return 0;
}


