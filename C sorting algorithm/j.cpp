#include "stdio.h"
#include "stdlib.h"

struct student
{
    int age;
    float score;
    char name[100];
};

void input(struct student* p, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("请输入第%d个学生的信息\n", i + 1);
        printf("age = ");
        scanf("%d", &p[i].age);
        printf("score = ");
        scanf("%f", &p[i].score);
        printf("name = ");
        scanf("%s", p[i].name);
        printf("\n");
    }
}

void output(struct student* p, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("正在打印第%d个学生的信息\n", i + 1);
        printf("%d %f %s\n", p[i].age, p[i].score, p[i].name);
        printf("\n");
    }
}

int main(void)
{
    int len, i;
    printf("please enter the length of the array: ");
    scanf("%d", &len);
    struct student* p = (struct student*)malloc(sizeof(int) * len);
    input(p, len);
    output(p, len);
    return 0;
}