#include "iostream"
using namespace std;
int& geta()
{
    static int a = 10;
    return a;
}

struct typeA
{
    int& a;
};

struct typeB
{
    int* a;
};

int main(void)
{
    printf("%lu\n", sizeof(struct typeA));
    printf("%lu\n",
        sizeof(struct typeA)); //证明了引用和指针都节约内存，引用就是常指针
    geta() = 1000; //引用可以当函数的左值
}