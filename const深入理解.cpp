#include "iostream"
using namespace std;

struct student
{
    int age;
};

int main(void)
{
    int age = 10;
    const int* p1 = &age; //不能修改*p2，其他可以改
    int const* p2 = &age; //不能修改*p2，其他可以改
    int* const p3 = &age; //不能修改p3的值，其他可以改
    const int* const p4 = &age; //不能改*p4和p4
    int const* const p5 = &age; //不能改*p5和p5
    student s = {10};
    const student* p = &s;
    printf("%d\n", (*p).age); // 虽然不能直接修改const的内容，但是可读
    return 0;
}
