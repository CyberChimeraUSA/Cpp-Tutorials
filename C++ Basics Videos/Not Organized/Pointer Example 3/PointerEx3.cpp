#include <iostream>
#include<string>

using namespace std;

int main(void) {
	int array1[] = {25, 50, 100, 150, 200};
	int* ptraccess;

	ptraccess = array1;

	for(int x = 0; x != 5; x++)
		cout << *(ptraccess++) << endl;

   return 0;
}


