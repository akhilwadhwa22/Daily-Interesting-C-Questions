#include<stdio.h>
#include<stdlib.h>

int main(){
	int x=10,y=20;
	int *const ptr=&x;
	printf("Original Value pointed by ptr= %d\n",*ptr);
	//Case1:
	ptr=&y;
	printf("New Value pointed by ptr= %d\n",*ptr);
	//Case 2:
	//*ptr=30;
	//printf("New Value pointed by ptr= %d\n",*ptr);
	return 0;
}
