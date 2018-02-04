#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	//vector<int> v(size, value);
   vector<int> v(10, 7);

   //v.size() = 7
   for (unsigned int i = 0; i < v.size(); ++i)
      cout << v[i] << endl;

   return 0;
}
