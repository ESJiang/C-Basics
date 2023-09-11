#include "iostream"
using namespace std;

//和结构体用法一样,类似java的写法,默认是public
class advhero {
public:
    char name[64];
    int sex;
    void printHero()
    {
        cout << "name = " << name << endl;
        cout << "sex = " << sex << endl;
    }
};

int main(void)
{
    advhero a;
    strcpy(a.name, "qwe");
    a.sex = 1;
    a.printHero();
    return 0;
}