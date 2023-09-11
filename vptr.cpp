#include "iostream"

using namespace std;

class parent
{
public:
    parent()
    {
    }
    parent(int a)
    {
        //print();
        this->a = a;
    }
    virtual void print() = 0;

private:
    int a;
};

class child : public parent
{
public:
    child(int a, int b)
        : parent(a)
    {
        //print();
        this->b = b;
    }
    inline void print()
    {
        cout << "child " << b << endl;
    }

private:
    int b;
};

int main(int argc, char const* argv[])
{
    parent* p = new child(10, 20);
    p->print();
    return 0;
}