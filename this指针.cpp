#include "iostream"
using namespace std;
class Test
{
public:
    Test(int k)
    {
        this->k = k;
    }
    inline void getk()
    {
        cout << this->k << endl;
    }
    inline static int& getcount()
    {
        return count;
    }
    inline static void changecount(int val)
    {
        count = val;
    }

private:
    int k;
    static int count;
};

int Test::count = 7;

int main(int argc, char const* argv[])
{
    Test a1(10);
    Test a2(20);
    a1.getk();
    a2.getk();
    Test::getcount() = 9;
    Test::changecount(44);
    cout << Test::getcount() << endl;
    return 0;
}