#include <iostream>

using namespace std;


int main(void) {
	int x, y;
	double multidArray[3][3] = {{1,2,3},{4,5,6},{7,8,9} };

	for(x=0; x < 3; x++)
			for(y=0; y < 3; y++)
			{
				cout << "Matrix Location: " << x <<"," << y << " value: "<< multidArray[x][y] << endl;
			}


   return 0;
}
//3 x 3 matrix
