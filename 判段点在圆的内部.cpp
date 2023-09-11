#include "iostream"
using namespace std;

class Point
{
public:
    inline void setxy(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    inline int getx()
    {
        return x;
    }
    inline int gety()
    {
        return y;
    }

private:
    int x;
    int y;
};

class Circle
{
public:
    inline void setxy(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    inline void setr(int r)
    {
        this->r = r;
    }
    inline void judge(Point& p)
    {
        int d = (p.getx() - x) * (p.getx() - x) + (p.gety() - y) * (p.gety() - y);
        if (d > r * r)
        {
            cout << "outside" << endl;
        } else if (d == r * r)
        {
            cout << "on the circle" << endl;
        } else
        {
            cout << "inside" << endl;
        }
    }

private:
    int x;
    int y;
    int r;
};

int main(void)
{
    Circle c;
    c.setr(4);
    c.setxy(2, 2);
    Point p;
    p.setxy(2, -2);
    c.judge(p);
    return 0;
}