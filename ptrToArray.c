#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *ptr1=arr;
	int (*ptr2)[5]=&arr;
	
	printf("Before:ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    ptr1++;  
    ptr2++;
    printf("After: ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

	return 0;
}
