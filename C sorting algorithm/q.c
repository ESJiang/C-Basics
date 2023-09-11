#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", a[i]);
    }

    for (int m = 0; m < 5; m++)
    {
        printf("%d \n", *(a + m));
    }

    return 0;
}