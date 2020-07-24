#include<stdio.h>
#include<stdlib.h>

int main(){
	
	const int var =10;
	int* ptr =&var;
	printf("Before: %d", *ptr);

	*ptr=20;
	printf("After: %d", *ptr);
}