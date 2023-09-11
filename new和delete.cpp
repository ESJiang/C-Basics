//c++中的new delete 类似 c语言的malloc和free. new比malloc好用, new出的对象可以当成结构体的指针来用(->)
//malloc free是stdlib.h中的函数，new和delete是c++的操作符，比前者效率高(压栈和出栈的开销小)
#include "iostream"
using namespace std;

class Test
{
public:
    Test(int a, int b)
    {
        cout << "Test(a,b)" << endl;
        this->a = a;
        this->b = b;
    }
    ~Test()
    {
        cout << "~Test()" << endl;
    }
    void printT()
    {
        cout << "printT()" << a << " " << b << endl;
    }

private:
    int a, b;
};

void test1() //c语言的写法
{
    int* p = (int*)malloc(sizeof(int));
    *p = 10;
    if (p != NULL)
    {
        free(p);
        //delete p;
        p = NULL;
    }
    int* array_p = (int*)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; ++i)
    {
        array_p[i] = i + 1;
    }
    for (int j = 0; j < 10; ++j)
    {
        printf("%d ", array_p[j]);
    }
    printf("\n");
    if (array_p != NULL)
    {
        free(array_p);
        array_p = NULL;
    }
}

void test2() //c++的写法
{
    int* p = new int;
    *p = 10;
    if (p != NULL)
    {
        //free(p);
        delete p;
        p = NULL;
    }
    int* array_p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        array_p[i] = i + 1;
    }
    for (int j = 0; j < 10; j++)
    {
        cout << array_p[j] << " ";
    }
    if (array_p != NULL)
    {
        delete[] array_p;
        array_p = NULL;
    }
}

int main(void)
{
    //test1();
    //printf("--------------------\n");
    //test2();
    Test* tp = new Test(10, 20);
    (*tp).printT();
    if (tp != NULL)
    {
        delete tp; // 会调用析构函数,free不能触发析构函数。
        tp = NULL;
    }
    return 0;
}
