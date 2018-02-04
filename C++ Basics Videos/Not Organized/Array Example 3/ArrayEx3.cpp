#include <iostream>

using namespace std;


int main(void) {
		int voltage[5] = {1, 2, 3, 4, 5};
		int v;
		double total = 0, mean;

		for (v = 0; v < 5; v++)
		{
			cout <<"Voltage from List: " <<voltage[v] << endl;
		}
		for(v = 0; v < 5; v++)
			total = total+ voltage [v];

			mean = total/5;

		cout << "Mean of Voltage : " << mean << endl;

   return 0;
}
