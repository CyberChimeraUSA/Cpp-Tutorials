#include <iostream>

using namespace std;


void MatrixShifter(int b[4][4])
{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
	{
		cout <<"b[" << i << "][" << j << "]:  ";
		cout << b[i][j]<< endl;
	}
}

int main () {

	int MatrixOrg[4][4] = {{1,2,3,4},{5,6,7,8,},{9,10,11,12},{13,14,15,16}};
	MatrixShifter(MatrixOrg);
	cout << "\n main return" << endl;
   return 0;
}

