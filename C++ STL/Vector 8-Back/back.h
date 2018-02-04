#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	   vector<int> v1(5);

	   //fill in vector
	   for (unsigned int i = 0; i < v1.size(); ++i)
	   {
	      v1[i] = i + 1;
	      cout << v1[i] << endl;
	   }

   //prints last element in vector
   cout << "Last element  = " << v1.back() << endl;

   return 0;
}
