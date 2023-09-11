#include "iostream"
using namespace std;
class Test
{
public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    inline void printt()
    {
        cout << "a = " << this->a << "\n"
             << "b = " << this->b << endl;
    }
    int geta() { return this->a; }
    int getb() { return this->b; }
    Test TestAdd(Test& t2) // Test t1, Test t2也可以，就是不能节约内存
    {
        Test temp(this->a + t2.geta(), this->b + t2.getb());
        return temp;
    }
    Test& TestAdd2(Test& t2) // Test t1, Test t2也可以，就是不能节约内存
    {
        this->a += t2.a;
        this->b += t2.b;
        return *this;
    }

private:
    int a, b;
};

// global function
/*Test TestAdd(Test &t1, Test &t2) //Test t1, Test t2也可以，就是不能节约内存
{
        Test temp(t1.geta() + t2.geta(), t1.getb() + t2.getb());
        return temp;
}*/

int main(int argc, char const* argv[])
{
    Test t1(10, 20);
    Test t2(100, 200);
    Test t3 = t1.TestAdd(t2);
    t1.TestAdd2(t2).TestAdd2(t2).TestAdd2(t1);
    t1.printt();
    return 0;
}