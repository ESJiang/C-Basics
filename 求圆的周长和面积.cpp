#include "iostream"
using namespace std;

inline double perimeter(double r)
{
    return 2 * 3.14 * r;
}

inline double area(double r)
{
    return 3.14 * r * r;
}

class circle
{
public:
    void setr(double r)
    {
        this->r = r;
    }
    inline double getperimeter()
    {
        perimeter = 3.14 * 2 * r;
        return perimeter;
    }

    inline double getarea()
    {
        area = 3.14 * r * r;
        return area;
    }

private:
    double r;
    double area;
    double perimeter;
};

int main(void)
{
    double radius = 4;
    cout << "周长: " << perimeter(radius) << endl;
    cout << "面积: " << area(radius) << endl;
    cout << "--------------------" << endl;
    circle m;
    m.setr(4);
    cout << "周长: " << m.getperimeter() << endl;
    cout << "面积: " << m.getarea() << endl;
    return 0;
}