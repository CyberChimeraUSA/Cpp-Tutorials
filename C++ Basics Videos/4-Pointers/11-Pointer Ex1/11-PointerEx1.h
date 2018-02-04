
#include <iostream>
using namespace std;


int main() {
	int var1 = 10;
	int var2 = 20;
	int* ptr;

	ptr = &var1;
	cout <<"Location of Var1: " << &var1 << endl;
	cout << "Location of pointer:  " <<ptr << endl;
	cout << "Value of the pointer:  " <<*ptr<<endl;

	ptr = &var2;
	cout <<"Location of Var2:  "<< &var2 << endl;
	cout <<"Location of pointer:  " << ptr << endl;
	cout << "Value of the pointer:  " <<*ptr<<endl;
	return 0;
}
