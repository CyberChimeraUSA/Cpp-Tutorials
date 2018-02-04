#include<iostream>
using namespace std;

class base
{
public:
	//virtual function defined i base
    virtual void print ()
    { cout<< "print base class" <<endl; }
    void show ()
    { cout<< "show base class" <<endl; }
    //virtual destructor
    virtual ~base(){}
};


class derived:public base
{
public:

    void print ()
    { cout<< "print derived class" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

int main()
{
    base *bptr = new derived;

    //virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

}