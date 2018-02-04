#include <iostream>
using namespace std;

//function templates
template <class generic>
generic average (generic a, generic b) {
  generic result = 0;
  generic sum = 0;

  sum = a + b;
  result = sum/2;
  return (result);

}

int main () {

  int i=5, j=6, a;
  float l=9.3, m=6.2, b;


  a=average<int>(i,j);
  b=average<float>(l,m);

  cout << a << endl;
  cout << b << endl;
  return 0;
}
