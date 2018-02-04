#include <iostream>

using namespace std;

// Base class for Values
class ValuesClass {
   public:
      void setCurrent(double i) {
         current = i;
      }
      void setResistance(double r) {
         resistance = r;
      }
      double current;
      double resistance;
};

// Base class for Power
class Power  {
   public:
	double getPower(double ohmsResult) {
         return ohmsResult;
      }
};

// Derived class
class Voltage: public ValuesClass, public Power {
   public:
	double getVoltage() {
         return (current * resistance);
      }
};

int main(void) {
   Voltage Volt;
   double ohmsLawResult;

   Volt.setCurrent(0.03);
   Volt.setResistance(100);

   ohmsLawResult = Volt.getVoltage();

   cout << "Voltage: " << Volt.getVoltage() << endl;


   cout << "Power: " << Volt.getPower(ohmsLawResult * 0.03) << endl;

   return 0;
}
