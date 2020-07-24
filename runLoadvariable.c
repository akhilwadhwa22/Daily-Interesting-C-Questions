#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=10;
	static int j=i;
	
	if(j==i)
		printf("Equal");
	else if (j>i)
		printf("j is Greater");
	printf("i is Greater");

	return 0;
}