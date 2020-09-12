#include<stdio.h>

int foo2(int x)
{
	int count=0;
	while(x)
	{
		x&=(x-1);
		count++;
	}
	return count;
}
int foo1( int x, int y)
{
	return foo2(x^y);
}
int main()
{
	printf("%d\n",foo1(20,30)); //20= 10100  30= 11110
	printf("%d\n",foo1(5,10)); 	// 5= 00101 10= 01010
	return 0;
}