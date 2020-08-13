#include<stdio.h>
int foo(int x)
{
	int count=0;
	for(int i=x;i>0;i>>=1)
	{
		count++;
	}
	count=count-1;
	return count;
}
int main()
{
	printf("1:%d\n",foo(2048));
    printf("2:%d\n",foo(128));
	return 0;
}
