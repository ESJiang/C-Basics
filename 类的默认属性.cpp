#include "iostream"
using namespace std;
class Test
{
public:
    inline Test()
    {
        a = b = 0;
    }
    inline Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    inline Test(const Test& another)
    {
        a = another.a;
        b = another.b;
    }
    inline void printt()
    {
        cout << "a = " << a << " b = " << b << endl;
    }

private:
    int a, b;
};

int main(int argc, char const* argv[])
{
    Test t1(10, 20);
    Test t2(t1);
    t2.printt();
    t1.printt();
    return 0;
}