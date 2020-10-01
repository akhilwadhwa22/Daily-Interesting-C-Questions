#include<stdio.h>
#define MAX (sizeof(num)*8)

int foo(int num, int ith)
{
	int mask=((1<<(MAX-ith-1))-1);
	return mask&num;	
}

int main()
{
    //1111 0000 0000 0000 0000 0000 0001 0100
	unsigned int a= 4026531860;
	printf("%d",foo(a,3));
	return 0;
}
