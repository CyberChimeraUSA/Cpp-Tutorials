// class templates
#include <iostream>
using namespace std;

template <class generic>
class master {
  //class variables
 generic a, b;
  public:
 	 //constructor
    master (generic value1, generic value2)
      {
    	//variable init
    	a=value1; b=value2;
      }
    //function declaration
    generic average ();
};

//function definition
template <class generic>
generic master<generic>::average ()
{
  generic mean,sum;
  sum = a + b;
  mean = sum/2;
  return mean;
}

int main () {
  master <float> genericOBJ (100, 75);
  cout << genericOBJ.average();
  return 0;
}
