// vptr指针
#include "iostream"
using namespace std;

class parent
{
public:
    parent(int a)
    {
        this->a = a;
    }
    virtual void func(int a) { cout << "parent::func(int)" << endl; }

private:
    int a;
};

class child : public parent
{
public:
    child(int a, int b)
        : parent(a)
    {
        this->b = b;
    }
    void func(int a) { cout << "child::func(int)" << endl; }
    void func(int a, int b) { cout << "child:func(int, int)" << endl; }

private:
    int b;
};

void myfunc(parent* h)
{
    h->func(10);
}

int main(int argc, char const* argv[])
{
    child* pp = new child(10, 2);
    pp->func(10, 2);
    return 0;
}