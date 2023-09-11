/*多态的产生的条件
1. 继承
2. 有虚函数重写，在父类函数头加入virtual关键字
3. 父类指针指向子类指针
*/
#include "iostream"

using namespace std;

class father
{
public:
    father()
    {
    }
    father(string kongfu)
    {
        this->kongfu = kongfu;
    }

    virtual void fight() // 在父类方法加virtual关键字，实现多态
    {
        cout << "蒋方为"
             << "使出了" << kongfu << endl;
    }
    string kongfu;
};

class child : public father
{
public:
    child(string kongfu)
        : father(kongfu)
    {
    }

    void fight()
    {
        cout << "许天伊"
             << "使出了" << kongfu << endl;
    }
};

void fightpeople(father* hero) //这里不能写成(child *hero),father的对象不属于child
{
    hero->fight();
}

int main(void)
{
    (new father("北冥神功"))->fight();
    (new child("北冥神功"))->fight();
    fightpeople(new father("六脉神剑"));
    fightpeople(new child("六脉神剑"));

    father* m = new child("123");
    m->fight();

    father* n = new father("123");
    n->fight();

    child* b = new child("123");
    b->fight();

    /* 错误的写法
	child *a = new father("123");
	a->fight();*/
    return 0;
}