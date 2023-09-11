#include "iostream"
using namespace std;

void func(int a = 666) //default
{
	cout<<a<<endl;
}

void get_volume(int len, int width, int height = 1000) //width赋予默认参数前，它的右边参数必须有默认参数
{
	cout<<len*width*height<<endl;
}

int main(void)
{
	func();
	get_volume(1,3);
	return 0;
}