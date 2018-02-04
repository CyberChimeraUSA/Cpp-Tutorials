#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
private:
	double pi, area, circum;
	double radius = 1;
public:
	Circle():pi(3.14){}

	void inc_radius()
	{
		radius++;
	}

	double get_area()
	{
		area = radius*radius*pi;
		return area;
	}
	double get_circum()
	{
		circum = radius*2*pi;
		return circum;
	}

};

int main ()
{
	Circle c1area,c2area;
	Circle c1circum,c2circum;

	cout <<"\nc1area= " << c1area.get_area();
	cout <<"\nc2area= " << c2area.get_area();
	cout <<"\nc1circum= " << c1circum.get_circum();
	cout <<"\nc2circum= " << c2circum.get_circum();

	c1area.inc_radius();
	c2area.inc_radius();
	c1circum.inc_radius();
	c2circum.inc_radius();

	cout <<"\nc1area= " << c1area.get_area();
	cout <<"\nc2area= " << c2area.get_area();
	cout <<"\nc1circum= " << c1circum.get_circum();
	cout <<"\nc2circum= " << c2circum.get_circum();

	c1area.inc_radius();
	c2area.inc_radius();
	c2area.inc_radius();
	c1circum.inc_radius();
	c2circum.inc_radius();
	c2circum.inc_radius();

	cout <<"\nc1area= " << c1area.get_area();
	cout <<"\nc2area= " << c2area.get_area();
	cout <<"\nc1circum= " << c1circum.get_circum();
	cout <<"\nc2circum= " << c2circum.get_circum();

	cout << endl;
	return 0;
}

