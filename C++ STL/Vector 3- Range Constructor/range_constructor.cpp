#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	//vector1 size is 5
   vector<int> v1(10);
   for (unsigned int i = 0; i < v1.size(); ++i)
   {
	   //sets v1 to range 1-10
      v1[i] = i + 1;
   }

   //sets vector to range of v1 (beginning to end)
    vector<int> v2(v1.begin(), v1.end());
    for (unsigned int i = 0; i < v2.size(); ++i)
      cout << v2[i] << endl;

   return 0;
}
