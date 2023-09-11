#include <stdio.h>
int main()
{
    int i, j;
    i = j = 3;
    int k, m;
    k = i++;
    m = ++j;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);
    printf("m = %d\n", m);
    return 0;
}