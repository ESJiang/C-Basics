//函数名相同，参数列表不同称为函数重载(返回类型和是否重载无关),
//没有完全匹配，隐式转换（float-double函数）（char-int函数）
#include "iostream"
using namespace std;

int func(int a, int b, int c = 300) {
  cout << "func1" << endl;
  return 0;
}

void func(int a)
{
	return;
}


int main(void)
{
	func(1,2);
	return 0;
}

