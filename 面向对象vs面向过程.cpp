#include "iostream"
//#include "string"
using namespace std;
class Dog
{
public:
    char name[64];
    //面向对象
    void eat(string food)
    {
        cout << name << " 吃 " << food << endl;
    }
};
//面向过程
void eat(class Dog& dog, string food)
{
    cout << dog.name << " 吃 " << food << endl;
}

int main(int argc, char const* argv[])
{
    Dog dog;
    strcpy(dog.name, "狗");
    eat(dog, "翔");
    dog.eat("翔");
    return 0;
}