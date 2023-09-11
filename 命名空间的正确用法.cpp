#include "iostream"
using namespace std;

namespace space1
{
    int g_a = 10;
}

namespace space2
{
    int a = 20;
    namespace space3
    {
        struct teacher
        {
            int id;
            char name[100];
        };
    }
}

int main(int argc, char const* argv[])
{
    using namespace space1;
    cout << g_a << endl;
    using namespace space2::space3;
    teacher t1;
    t1.id = 3;
    strcpy(t1.name, "jiang");
    cout << t1.id << endl;
    cout << t1.name << endl;
    return 0;
}