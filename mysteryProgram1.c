#include<stdio.h>
int foo(int x)
{
	if(x>=1)
    {
		if((x & (x-1))==0)
			return 1;
		}
	return 0;
}

int main()
{
	printf("1024: %d\n",foo(1024));
	printf("232: %d\n",foo(232));
	printf("1: %d\n",foo(1));
	printf("0: %d\n",foo(0));
	return 0;
}
