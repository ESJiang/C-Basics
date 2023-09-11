#include "iostream"
using namespace std;
struct student
{
    int id;
    char name[64];
};

void chang_value(int& a)
{
    a = 40;
}

void s(int& x, int& y)
{
    int* t = x;
    *x = 0;
    *t = 5;
}

void swap_value(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void chang_struct(struct student& a)
{
    a.id = 30;
    strcpy(a.name, "xutianyi");
}

void print_student(struct student& a)
{
    printf("%d %s\n", a.id, a.name);
}

int main(void)
{
    int a = 20, b = 30;
    int& re = a; // re是a的引用，以后永远指向a
    re = 50;
    //re = b; //实际上是a = b,会把b的值赋给a
    int& re2 = re; //re2 = re = a,改变re2会同时改变re和a的值
    re2 = 5;
    cout << "a = " << a << endl;
    chang_value(a);
    cout << "a = " << a << endl;

    int c = 30, d = 40;
    swap_value(c, d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    struct student j = {10, "jiang"};
    chang_struct(j);
    print_student(j);

    return 0;
}