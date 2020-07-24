#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	bool a=1, b=0;

	printf("%lu\n",sizeof(a));
	printf("%lu\n",sizeof(b));
	printf("%lu\n",sizeof(a==b));
	printf("%lu\n",sizeof(b>a));

	return 0;
}
