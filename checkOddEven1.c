#include<stdio.h>
int foo(int n)
{
	if((n^1)==n+1)
		return 1;
	else
		return 0;
}
int main()
{
	printf("%d\n",foo(123));
	printf("%d\n",foo(432));
	printf("%d\n",foo(456));
	printf("%d\n",foo(877));
	return 0;
}