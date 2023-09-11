#include <stdio.h>
#include <string.h>

struct student
{
    int sid;
    char name[200];
    int age;
};

void f(struct student* pst)
{
    pst->sid = 99;
    pst->age = 33;
    strcpy(pst->name, "jiang");
}

void g(struct student* pst)
{
    printf("%d %d %s\n", pst->sid, pst->age, pst->name);
}

int main(void)
{
    struct student s = {100, "jiangfangwei", 23};
    f(&s);
    g(&s);
    return 0;
}