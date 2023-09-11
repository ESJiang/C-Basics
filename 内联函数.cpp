//内联函数在一个函数需要频繁使用并且简单(代码很小)，可以使用它来减少压栈出栈的操作，编译器会权衡代码量和压栈出栈操作的开销，不一定写了inline函数就一定会不压栈和出栈。
#include "iostream"

using namespace std;
#define max(a, b) \
    ((a) > (b) ? (a) : (b))

inline void printab(int a, int b) // inline 函数的优点
{
    cout << "a = " << a << " b = " << b << endl;
}

int main(int argc, char const* argv[])
{
	int a = 10, b = 20;
	for (int i = 0; i < 2; ++i)
	{
		printab(a, b);
	}
	//int c = max(a, b);
	//printf("%d\n", c);

	return 0;
}
