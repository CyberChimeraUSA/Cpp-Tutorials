#include <iostream>

using namespace std;

class Engineering {
private:
   double current;
   double resistance;
 public:
      static int count;

      Engineering(double i, double r) {
         current = i;
         resistance = r;
         count++;
      }

      void Voltage() {
    	  cout << current*resistance << endl;
      }
};

int Engineering::count = 0;

int main(void) {
   Engineering Param1(0.01, 500);
   Engineering Param2(0.02, 500);
   //Engineering Param3(0.03, 500);
   //Engineering Param4(0.04, 500);

   cout << "Static Calls: " << Engineering::count << endl;
   Param1.Voltage();
   Param2.Voltage();
   //Param3.Voltage();


   return 0;
}
