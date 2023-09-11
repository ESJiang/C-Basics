#include "stdio.h"
#include "stdlib.h"

void f(int * p)
{
	*p = 100;
}

int main(void)
{
	int * m = (int *)malloc(sizeof(int));
	*m = 10;
	printf("%d\n", *m);
	f(m);
	printf("%d\n", *m);
	return 0;
}