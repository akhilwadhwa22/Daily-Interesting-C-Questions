#include<stdio.h>
int foo(int x)
{
	int count=0;
	if((x&(x-1))==0)
		return x;
	while(x!=0)
	{
		x=x>>1;
		count++;
	}
	return (x|(1<<(count)));	
}
int main()
{
	printf("%d\n",foo(786));
	printf("%d\n",foo(2));
	printf("%d\n",foo(432));
	printf("%d\n",foo(31));
}
