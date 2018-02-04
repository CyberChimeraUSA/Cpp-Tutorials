#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<int> v(5);
	v[0] = 1;  //element 1
	v[1] = 2;  //element 2
	v[2] = 3;  //element 3
	v[3] = 3;  //element 4
	v[4] = 5;  //element 5

   std::vector<int>::iterator it;
    it = adjacent_find(v.begin(), v.end());

   if (it != v.end())
      cout << "First occurrence at = " << *it << endl;


   return 0;
}
