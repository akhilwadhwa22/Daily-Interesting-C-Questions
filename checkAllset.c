#include<stdio.h>

int foo1(int n)
{
	if(n==0)
		return 0;
	while(n>0)
	{
		if((n&1)==0)
			return 0;
		n>>=1;
	}
	return 1;
}
int main()
{
	printf("11:%d\n",foo1(11)); 
	printf("15:%d\n",foo1(15));
	return 0;
}
