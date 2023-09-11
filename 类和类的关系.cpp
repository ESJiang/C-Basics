//目标：高内聚，低耦合
//public继承，子类内部，外部父类的pub和protected的成员变量可以访问,外部只能访问pub
//protected继承，子类内部父类的pub和protected的成员变量可以访问，外部不可以(main)
//private继承,子类内部父类的pub和protected的成员变量可以访问，外部不可以(main)
//protected和private的区别：派生类是否能访问父类的成员变量
//继承中的static变量
//c++可以多继承

#include "iostream"
using namespace std;

class parent
{
public:
    static int a;
    int pub;
    parent() //必须写
    {
    }
    void func()
    {
        cout << this->pub << endl;
        cout << this->pro << endl;
        //cout<<this->pri<<endl;
    }

protected:
    int pro;

private:
    int pri;
};

int parent::a = 100;

class child1 : public parent
{
public:
    void func()
    {
        cout << "1123" << endl;
        cout << this->pro << endl;
        //cout<<this->pri<<endl;
    }
};

class child2 : protected parent
{
public:
    void func()
    {
        cout << this->pub << endl;
        cout << this->pro << endl;
        //cout<<this->pri<<endl;
    }
};

class child3 : private parent
{
public:
    void func()
    {
        cout << this->pub << endl;
        cout << this->pro << endl;
        //cout<<this->pri<<endl;
    }
};

//派生类无论如何(public, private, protected)继承的子类(private继承父类），不能访问父类的任何变量
/*class child4 : public child3
{
	void func()
	{
		cout<<this->pub<<endl;
		cout<<this->pro<<endl;
		//cout<<this->pri<<endl;
	}
};*/

class student
{
public:
    student(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    inline void printstudent()
    {
        cout << "id = " << this->id << " name = " << this->name << endl;
    }

private:
    int id;
    string name;
};

class student2 : public student
{
public:
    student2(int id, string name, int score)
        : student(id, name)
    {
        this->score = score;
    }
    inline void printstudent()
    {
        student::printstudent();
        cout << "score = " << this->score << endl;
    }
private:
	int score;
};

int main(int argc, char const *argv[])
{
	student2 a(1,"jiang", 98);
	a.printstudent();
	//parent *p = new child1();
	//(*p).func();
	(new parent())->func();
	return 0;
}