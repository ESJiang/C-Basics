#include "iostream"
#include "math.h"

using namespace std;

class Point
{
public:
	inline Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	inline double pointdistance(Point &a)
	{
		return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
	}
private:
	double x,y;
};

class Circle
{
public:
	inline Circle(double r, double x, double y): p(x, y)
	{
		this->r = r;
	}
	inline void judge(Circle &a)// class对象最好用运用的写法，节省空间
	{
		double rr = a.r+r;
		double dis = p.pointdistance(a.p);
		if(rr > dis)
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout<<"false"<<endl;
		}
	}
private:
	double r;
	Point p;
};


int main()
{
	double x, y, r;
	cout<<"请输入第一个圆的半径"<<endl;
	cin>>r;
	cout<<"请输入第一个圆的x"<<endl;
	cin>>x;
	cout<<"请输入第一个圆的y"<<endl;
	cin>>y;
	Circle c1(r,x,y);

	cout<<"请输入第二个圆的半径"<<endl;
	cin>>r;
	cout<<"请输入第二个圆的x"<<endl;
	cin>>x;
	cout<<"请输入第二个圆的y"<<endl;
	cin>>y;
	Circle c2(r,x,y);

	c1.judge(c2);
	return 0;
}