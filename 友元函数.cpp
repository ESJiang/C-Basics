#include "cmath"
#include "iostream"
using namespace std;

class Point;

class PointManager
{
public:
    double PointDistance(Point& p1, Point& p2);
};

class Point
{
public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    inline int getx() { return this->x; }
    inline int gety() { return this->y; }

    friend double PointDistance(Point& p1,
        Point& p2); //全局函数能够访问类的私有成员
    friend double PointManager::PointDistance(
        Point& p1, Point& p2); //全局函数能够访问类的私有成员
private:
    int x, y;
};

double PointDistance(Point& p1, Point& p2)
{
    int d_x = p1.x - p2.x;
    int d_y = p1.y - p2.y;
    double dis = sqrt(d_x * d_x + d_y * d_y);
    return dis;
}

double PointManager::PointDistance(Point& p1, Point& p2)
{
    int d_x = p1.x - p2.x;
    int d_y = p1.y - p2.y;
    double dis = sqrt(d_x * d_x + d_y * d_y);
    return dis;
}

int main(void)
{
    Point p1(1, 2);
    Point p2(2, 2);
    cout << PointDistance(p1, p2) << endl;
    PointManager a;
    cout << a.PointDistance(p1, p2) << endl;
    return 0;
}