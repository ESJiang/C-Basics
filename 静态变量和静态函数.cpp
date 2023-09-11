#include "iostream"
using namespace std;

class student
{

public:
    student(int id, double score)
    {
        this->id = id;
        this->score = score;
        ++count;
        sum += score;
    }
    static int get_count()
    {
        return count;
    }
    static double get_average()
    {
        return sum / count;
    }
    ~student()
    {
        --count;
        sum -= score;
    }

private:
    int id;
    double score;
    static int count;
    static double sum;
};

int student::count = 0;
double student::sum = 0;

class box
{
public:
    box(int len, int width)
    {
        this->len = len;
        this->width = width;
    }
    void volume()
    {
        cout << "高度是" << height << endl;
        cout << "体积是" << len * width * height << endl;
    }
    static int& get_height()
    {
        return height;
    }

private:
    int len, width;
    static int height;
};

int box::height = 100;

class A
{
public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int getC()
    {
        ++c;
        return c;
    }
    static int& getCC()
    {
        return c;
    }

private:
    static int c;
    int a, b;
};

int A::c = 100;

int main(void)
{
    /*A a1(10, 20);
	A a2(100, 200);
	cout<<a1.getC()<<endl;
	cout<<a2.getC()<<endl;
	//cout<<A::c<<endl; //不可访问
	A::getCC() = 300; //传引用来当左值
	cout<<a1.getC()<<endl;
	cout<<a2.getC()<<endl;
	printf("\n");

	box b1(10,20);
	box b2(100,200);
	b1.volume();
	b2.volume();
	printf("\n");
	box::get_height() = 300;
	b1.volume();
	b2.volume();*/
    student f1(1, 80);
    student f2(2, 90);
    student f3(3, 100);
    student f4(4, 100);
    cout << "总人数是: " << student::get_count() << endl;
    cout << "平均分是: " << student::get_average() << endl;
    return 0;
}