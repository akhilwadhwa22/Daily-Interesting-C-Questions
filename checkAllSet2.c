#include<stdio.h>

int foo2(int n)
{
	if((n&(n+1))==0)
		return 1;
	return 0;
}
int main()
{
	printf("11:%d\n",foo2(11));
	printf("10:%d\n",foo2(15));
	return 0;
}