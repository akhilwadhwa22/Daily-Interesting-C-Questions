#include<stdio.h>

int foo(int a, int b)
{
	if((a^b)<0)
		return 1;
	return 0;
}
int main()
{
	printf("%d\n",foo(5,10));
	printf("%d\n",foo(-5,10));
	printf("%d\n",foo(-5,-10));
	printf("%d\n",foo(5,-10));
	return 0;
}
