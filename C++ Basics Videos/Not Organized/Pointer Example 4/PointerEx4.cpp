#include <iostream>
#include<string>

using namespace std;

int main(void) {

	void voltage(double&);

	double generalVar = 0.01;
	cout << "Current is : " << generalVar << endl;

	voltage(generalVar);
	cout << "Voltage is : " << generalVar << endl;
   return 0;
}
void voltage(double& x)
{
	cout << "Resistance is : 10" << endl;
	x *= 10;
}

/*
#include <iostream>
#include<string>

using namespace std;

int main(void) {

	void voltage(double*);

	double generalVar = 0.01;
	cout << "Current is : " << generalVar << endl;

	voltage(&generalVar);
	cout << "Voltage is : " << generalVar << endl;
   return 0;
}
void voltage(double* x)
{
	cout << "Resistance is : 10" << endl;
	*x *= 10;
}



*/