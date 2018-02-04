#include <iostream>
#include<string>

using namespace std;

int main(void) {
string v1 ("Voltage");
string i1 ("Current");
string r1 ("Resistance");
string standard ("Enter a ");
double i, r, v;

cout << standard << i1 << endl;
cin >> i;
cout << standard << r1 <<endl;
cin >> r;
v = i*r;
cout << v1 << ": " << v;


   return 0;
}


