#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int len, i;
    printf("please enter the length of the array you want: ");
    scanf("%d", &len);
    int* pArr = (int*)malloc(sizeof(int) * len); //*pArr就是pArr[0]

    for (i = 0; i < len; i++)
    {
        *(pArr + i) = i;
    }

    for (i = 0; i < len; i++)
    {
        printf("%d\n", *(pArr + i));
    }
    free(pArr);
    return 0;
}