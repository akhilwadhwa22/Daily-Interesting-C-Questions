#include<stdio.h>
#include<stdlib.h>

union foo
{
	int x;
	char arr[4];
};

int main()
{	
	union foo f1,f2;
    //Case1
	f1.x=0;
	f1.arr[1]='A';
	printf("%d",f1.x);
	printf("Case1:%s\n",f1.arr);
    //Case2
	f2.x=66;
	f2.arr[1]='B';
	printf("Case2:%s\n",f2.arr);

	return 0;
}
