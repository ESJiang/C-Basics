#include <iostream>

using namespace std;

class furniture
{
public:
    int m;
};

class bed : public furniture
{
public:
    void sleep()
    {
        printf("睡觉\n");
    }
};

class sofa : public furniture
{
public:
    void sit()
    {
        printf("沙发\n");
    }
};

class sofabed : public bed, public sofa
{
public:
    void sleepandsit()
    {
        sit();
        sleep();
    }
};

int main(int argc, char const* argv[])
{
    (new bed())->sleep();
    (new sofa())->sit();
    (new sofabed())->sleepandsit();
    return 0;
}