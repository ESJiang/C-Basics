#include "iostream"
using namespace std;

struct teacher {
    int id;
    char name[64];
};

int init_mem(struct teacher*& a)
{
    a = (struct teacher*)malloc(sizeof(struct teacher));
    if (a == NULL) {
        return -1;
    } else {
        a->id = 300;
        strcpy(a->name, "jiang");
        return 0;
    }
};

void free_teacher(struct teacher*& a)
{
    if (a != NULL) {
        free(a);
        a = NULL;
    } else {
        return;
    }
}

int main(int argc, char const* argv[])
{
    struct teacher* t;
    init_mem(t);
    cout << "id = " << t->id << " name = " << t->name << endl;
    free_teacher(t);
    return 0;
}