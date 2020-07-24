#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int x=10,y=20;
	const int *ptr=&x;

	printf("Original Value pointed by ptr= %d\n",*ptr);
	ptr=&y;
	printf("New Value pointed by ptr= %d\n",*ptr);
	//*ptr=30;
	//printf("Final Value pointed by ptr= %d\n",*ptr);
	
	return 0;
}