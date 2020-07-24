#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=-3;
    
	int b=-a-a+!-4;
	printf("b=%d\n",b);
    
	int c=-a-a+!0;
	printf("c=%d\n",c);

	int d= -a-a+!4;
	printf("d=%d\n",d);
	return 0;
}

