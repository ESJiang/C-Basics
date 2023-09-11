// 选择排序
#include <stdio.h>
int main()
{
    int i,j,t,a[11];
    printf("请输入10个数：\n");
    for(i = 1;i < 11;i++)
        scanf("%d",&a[i]);
    for(i = 1;i <= 9;i++)
        for (j = i+1;j <= 10;j++)
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    printf("排序后的顺序是：\n");
    for(i = 1;i <= 10;i++)
        printf("%5d", a[i]);
    printf("\n");
    return 0;
}