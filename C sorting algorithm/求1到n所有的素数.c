#include <stdio.h>
#include <stdbool.h>

bool isPrime(int val)
{
	int i;
	for(i = 2; i < val; ++i)
	{
		if(val % i == 0)
		{
			break;
		}
	}
	if(val == i)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void trace(int m)
{
	int number = 0;
	for(int i = 2; i<=m ;i++)
	{
		if(isPrime(i) == true)
		{
			printf("%d\n",i);
			++number;
		}
	}
	printf("The total number is: %d\n", number);
}

int main(void)
{
	int m;
	scanf("%d",&m);
	trace(m);
}