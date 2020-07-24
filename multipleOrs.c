// multipleOrs.c
#include<stdio.h>
#include<stdlib.h>

int main(){
	int m, i=0,j=0,k=6;
	m= i++ && j++ && k++;
	printf("%d,%d,%d,%d\n ",m,i,j,k);
    printf("%d,%d,%d,%d\n ",m,i,j,k);
	return 0;
}
