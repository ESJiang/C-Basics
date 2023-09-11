//注意菱形结构，当一个类可能继承多个父类，父类应该抽象继承它的父类。
#include "iostream"
using namespace std;

class furniture
{
public:
    int m;
};

class bed : virtual public furniture // virtual 关键字只对m有影响
{
public:
    void sleep()
    {
        cout << "睡觉" << endl;
    }
};

class sofa : virtual public furniture
{
public:
    void sit()
    {
        cout << "在沙发上休息" << endl;
    }
};

class sofabed : public bed, public sofa // bed, sofa有个相同的成员变量
{
public:
    void sleepandsit()
    {
        sleep();
        sit();
    }
};

int main(void)
{
    //(new bed())->sleep();
    //(new sofa())->sit();
    //(new sofabed())->sleepandsit();
    //(new sofabed())->bed::m = 3;
    //(new sofabed())->m = 3;// 加了virtural后,派生类直接和基类的成员变量相关联。
    // printf("%d\n", (new sofabed())->m); //new出的对象自动清空
    return 0;
}