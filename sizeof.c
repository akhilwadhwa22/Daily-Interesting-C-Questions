#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int arr[]={10,20,30,40,50};
	int *ptr=arr;

	printf("%ld\n",sizeof(arr));
	printf("%ld\n",sizeof(ptr));

	return 0;
}