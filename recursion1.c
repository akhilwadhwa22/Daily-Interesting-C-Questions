#include<stdio.h>
#include<stdlib.h>

int foo(int x){	
	static int i=0;
	i++;
	if (x<1)
		return 0;
	foo(x-1);
	foo(x-3);
	return i;	
}

int main(){
	int i=foo(6);
	printf("%d",i);
	return 0;
}