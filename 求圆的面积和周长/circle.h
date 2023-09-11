#include "iostream"
using namespace std;
class circle
{
public:
	inline circle(double r)
	{
		this->r = r;
	}

	double getr()
	{
		return r;
	}

	double getarea()
	{
		area = 3.14*r*r;
		return area;
	}


	double getperimeter()
	{
		perimeter = 3.14*2*r;
		return perimeter;
	}
private:
	double r;
	double area;
	double perimeter;
};