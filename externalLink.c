#include <stdio.h> 
#include <stdlib.h> 

int a = 50; 
int c = 70;  

int main(){ 
    extern int b;
    printf("%d %d %d\n", a, b, c); 
    return 0;
	} 
static int b = 60;