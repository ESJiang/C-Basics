#include "iostream"
using namespace std;

int main(void)
{
    int a = 10;
    const int& re = a;
    a = 3;
    cout << a << endl;
    cout << re << endl;
    return 0;
}