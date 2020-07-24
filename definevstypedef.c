#include<stdio.h>
#include<stdlib.h>

typedef int* ptr1;
#define ptr2 int*

int main(){
	ptr1 a,b,c;
	ptr2 x,y,z;
	printf("%lu,%lu,%lu\n",sizeof(a),sizeof(b),sizeof(c));
	printf("%lu,%lu,%lu\n",sizeof(x),sizeof(y),sizeof(z));

	return 0;
}