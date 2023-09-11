#include "stdio.h"

int g(int m)
{
    m *= 2;
    return m;
}

int f(int n)
{
    n = g(n);
    return n;
}

int main(void)
{
    int val = f(5);
    printf("val = %d\n", val);
    return 0;
}