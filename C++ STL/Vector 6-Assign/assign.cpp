#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   vector<int> v1;

   cout << "Pre-assign size  = " << v1.size() << endl;

   v1.assign(10, 7);

   cout << "Post-assign size = " << v1.size() << endl;

   for (unsigned int i = 0; i < v1.size(); ++i)
      cout << v1[i] << endl;

   return 0;
}
