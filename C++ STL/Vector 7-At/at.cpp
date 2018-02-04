#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   vector<int> v(5);

   //sets vector to sequential list
   for (unsigned int i = 0; i < v.size(); ++i)
      v[i] = i;

   //prints each value of list
   for (unsigned int i = 0; i < v.size(); ++i)
      cout << v.at(i) << endl;

   return 0;
}
