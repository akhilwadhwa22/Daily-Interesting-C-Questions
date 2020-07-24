#include<stdio.h>

int a, b= 0; 
int foo (void) 
{ 
    static int a = 2; 
    int b = 1;
    a += b++; 
    printf ("%d %d \n" , a, b); 
    return a;
}

int main () 
{ 
    static int a = 1;
    a=foo(); 
    printf ("%d %d \n" , a, b);
    a += 1; 
    a=foo(); 
    printf ("%d %d \n" , a, b); 
} 
  
 