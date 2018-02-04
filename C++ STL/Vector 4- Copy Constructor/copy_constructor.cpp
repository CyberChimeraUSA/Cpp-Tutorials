#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	//create vector of size 10
   vector<int> v1(10);
   for (unsigned int i = 0; i < v1.size(); ++i)
	   //fill vector with 1-10
      v1[i] = i + 1;

   //copy v1 to v2

   vector<int> v2(v1);
  //copy values from v1 to v2
   for (unsigned int i = 0; i < v2.size(); ++i)
      cout << v2[i] << endl;


   return 0;
}
