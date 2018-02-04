#include <iostream>

using namespace std;


int main(void) {
	int x, y;
	double multidArray[3][3];
	cout << endl;

	for(x=0; x < 3; x++)
		for(y=0; y < 3; y++)
		{
			cout << "Enter parameter matrix position X" << x+1;
			cout << ", Y" << y+1 << ":  ";
			cin >> multidArray[x][y];

		}

   return 0;
}
