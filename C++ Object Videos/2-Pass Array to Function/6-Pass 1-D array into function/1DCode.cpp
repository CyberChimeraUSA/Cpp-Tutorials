#include <iostream>

using namespace std;

void MatrixShifter(int b[4])
{
	for (int i=0; i < 4; i++)
	{

			cout <<"b[" << i << "]:  ";
			cout << b[i]<< endl;
	}
}


int main () {

	int MatrixOrg[4] = {1,2,3,4};
	MatrixShifter(MatrixOrg);
   return 0;
}

