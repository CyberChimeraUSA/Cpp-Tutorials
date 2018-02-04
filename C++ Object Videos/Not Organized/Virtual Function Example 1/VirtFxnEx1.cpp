#include <iostream>
#include <map>

using namespace std;


class Parent
{
public:
	virtual void show()
	{
		cout << "In the Parent Class" << endl;
	}
};
class Sub1: public Parent
{
public:
	void show()
	{
		cout << "In the Sub1 Class" << endl;
	}
};
class Sub2 : public Parent
{
public:
	void show()
	{
		cout << "In the Sub2 Class" << endl;
	}
};


int main(void){
	Sub1 s1;
	Sub2 s2;
	Parent* pointerVar;

	pointerVar = &s1;
	pointerVar ->show();
	pointerVar = &s2;
	pointerVar ->show();

   return 0;
}
