#include "iostream"
using namespace std;

class cube
{
public:
	inline void setr(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	inline void getarea()
	{
		cout<<"表面积是: "<<2*(a*b + a*c + b*c)<<endl;
	}
	inline void getvolume()
	{
		cout<<"体积是: "<<a*b*c<<endl;
	}
	inline bool judgecube(cube &c1)
	{
		if(a == c1.a&&b == c1.b&&c == c1.c)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	double a,b,c;
};


int main(void)
{
	cube a,b;
	a.setr(1,2,3);
	b.setr(1,2,3);
	a.getvolume();
	a.getarea();
	cout<<a.judgecube(b)<<endl;
	return 0;
}