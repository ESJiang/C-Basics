#include "stdio.h"
#include "stdlib.h"

struct student
{
    int age;
    float score;
    char name[100];
};

void inputF(int len, struct student* a)
{
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("请输入第%d个学生的年龄", i + 1);
        printf("age = ");
        scanf("%d", &(a->age));
        printf("请输入第%d个学生的成绩", i + 1);
        printf("score = ");
        scanf("%f", &(a->score));
        printf("请输入第%d个学生的姓名", i + 1);
        printf("name = ");
        scanf("%s", a->name);
        printf("\n");
    }
}

void outputF(int len, struct student* a)
{
    for (int i = 0; i < len; ++i)
    {
        printf("第%d个学生的年龄", i + 1);
        printf("age = %d\n", a->age);
        printf("第%d个学生的成绩", i + 1);
        printf("score = %f\n", a->score);
        printf("第%d个学生的姓名", i + 1);
        printf("score = %s\n", a->name);
        printf("\n");
    }
}

int main(void)
{
    printf("请输入学生的人数:\n");
    int len;
    printf("len = ");
    scanf("%d", &len);
    struct student* a = (struct student*)malloc(len * sizeof(int));
    inputF(len, a);
    outputF(len, a);
    return 0;
}