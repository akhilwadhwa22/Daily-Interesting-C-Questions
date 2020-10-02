#include<stdio.h>

int foo(int arr[],int n)
{
	int x1=1,x2=arr[0];
	for(int i=2;i<=n+1;i++)
		x1=x1^i;
	for(int i=1;i<n;i++)
		x2=x2^arr[i];		
	return x1^x2;
}
int main()
{
	int arr[]={3,2,1,6,4,9,7,8};
	int size=(sizeof(arr)/sizeof(arr[0]));
	printf("%d\n",foo(arr,size));
	return 0;
}
