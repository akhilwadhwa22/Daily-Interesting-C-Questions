#include<stdio.h> 
  
int main() 
{ 	
    //Case 1
    // register int i = 10; 
    // int* a = &i; 
    // printf("%d", *a); 

    //Case 2
	int j=10;
    register int *b=&j;
    printf("%d", *b); 
    
    return 0; 
} 