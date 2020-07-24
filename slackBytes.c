#include<stdio.h>
#include<stdlib.h>
struct foo1{
	int num1;
	char x;
	float num2;
};

struct foo2{
	int num3;
	char x;
	char y;
	float num4;
};



int main(){

	struct foo1 obj1;
	struct foo2 obj2;
	printf("%lu\n",sizeof(obj1));
	printf("%lu\n",sizeof(obj2));
	obj1.x = 0x12; //0000 1100
	obj1.num1=4;
	obj1.num2=4;
	char *pToX = (char *)&obj1;
	for (int i=0;i<12;i++)
		printf("%x\n", *(pToX + i));
	return 0;
}
