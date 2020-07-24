#include <stdio.h> 
#include <stdlib.h> 

struct foo{
	int a=5;
	float b=10.0;
};

int main(){ 
	struct foo ptr;
	printf("%d, %f\n",ptr.a,ptr.b);
	return 0;
} 
