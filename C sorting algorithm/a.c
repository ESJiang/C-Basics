#include <math.h>
#include <stdio.h>
int main(int argc, char const* argv[])
{
    float x = 0;
    if (fabs(x - 0.000001) <= 0.000001) // float:7; double:16
    {
        printf("x==0");
    } else
    {
        printf("x!=0");
    }
    return 0;
}