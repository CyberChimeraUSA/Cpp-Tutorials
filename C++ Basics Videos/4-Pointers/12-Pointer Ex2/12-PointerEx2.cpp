
#include <iostream>
using namespace std;


int main() {
	int var1 = 10;
	float var2 = 11.6;

	int* ptrvar1;
	float* ptrvar2;
	void* ptrvoid;

	ptrvar1 = &var1;
	cout << "Location of Var1: " << ptrvar1 << endl;
	cout << "Value of Var1: " << *ptrvar1 << endl;
	ptrvar2 = &var2;
	cout << "Location of Var2: " << ptrvar2 << endl;
	cout << "Value of Var2: " << *ptrvar2 << endl;
	ptrvoid = &var1;
	cout << "Location of ptrvoid: " << ptrvoid << endl;
	//cout << "ptrvoid: " << *ptrvoid << endl;
	ptrvoid = &var2;
	cout << "Location of ptrvoid: " << ptrvoid << endl;
	//cout << "ptrvoid: " << *ptrvoid << endl;
	return 0;
}
