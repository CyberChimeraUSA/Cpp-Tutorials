#include <iostream>
using namespace std;
class Engineering{


private:
double resistance;
double current;
double voltage;

public:
Engineering():resistance(1.0),current(1.0)
	{voltage = 0;}

Engineering(float r, float i) : resistance(r),current(i)
	{voltage = 0;}

void getParams()
{
cout << "Enter resistance: "<<endl;
cin >> resistance;
cout << "Enter current: " << endl;
cin >> current;
cout << endl;
}

void showParams()
{
cout << "total resistance: " << resistance << " ohms " << " " <<  "total current: " << current << " amps " <<endl;
//cout << endl;
}

Engineering total_params(Engineering);
void voltageCalculator(Engineering);
}
;

Engineering Engineering::total_params(Engineering ob3)
{
	Engineering tempVar;

	tempVar.current = current + ob3.current;
	tempVar.resistance = resistance + ob3.resistance;

	return tempVar;
}
void Engineering::voltageCalculator(Engineering ob2)
{
	Engineering temp;
	float voltage;
		voltage = ob2.current * ob2.resistance;
		cout << "voltage from total parameters: " << voltage;

}

int main() {
	Engineering ob1, ob2;
	Engineering ob3(1000, 0.2);
	ob1.getParams();
	ob2 = ob1.total_params(ob3);
	ob2.showParams();
	ob2.voltageCalculator(ob2);



	return 0;
}
