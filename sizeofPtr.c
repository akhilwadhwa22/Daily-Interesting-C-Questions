#include <stdio.h>
#include <stdlib.h>

int findsize(int* arr){
	int size= sizeof(arr)/sizeof(arr[0]);
	return size;
}

int main(){
	
	int arr[5]={10,20,30,40,50};
	int size1= sizeof(arr)/sizeof(arr[0]);
	int size2=findsize(arr);
	printf("Size1:%d,Size2:%d\n",size1, size2);
	return 0;
}