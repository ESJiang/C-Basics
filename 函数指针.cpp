#include "iostream"
using namespace std;

int func(int a, int b)
{
    cout << "2" << endl;
    return 0;
}

int func(int a, int b, int c)
{
    cout << "3" << endl;
    return 0;
}

int main(int argc, char const* argv[])
{
    int (*fp3)(int, int) = func;
    int (*fp4)(int, int, int) = func;
    fp3(10, 30);
    fp4(10, 33, 33);
    return 0;
}