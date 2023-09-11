#include "iostream"
using namespace std;

class Test {
public:
    inline Test()
    {
        x = y = 0;
    }
    inline Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    inline void printg()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
    /*Test(const Test &t) //default
	{
		x = t.x;
		y = t.y;
	}*/
private:
    int x, y;
};

int main(void)
{
    Test t1(1, 2);
    Test t2(t1); //拷贝构造函数
    t1.printg();
    t2.printg();
    Test t3 = t1; // 也是拷贝构造函数
    t3.printg();

    Test t4;
    t4 = t1; //不是拷贝构造，是赋值操作
    t4.printg();
    return 0;
}