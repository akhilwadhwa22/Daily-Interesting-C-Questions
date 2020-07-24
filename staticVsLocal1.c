#include<stdio.h>

int a= 0; 
void prtFun (void) 
{ 
    static int a = 5; 
    a += 1; 
    printf ("%d",a);
}

int main () 
{   
    printf ("%d",&a);
    static int a = 1;
    prtFun(); 
    a += 1; 
    printf ("%d",a);
    prtFun(); 
    a += 1;
    printf ("%d\n",a);
} 
  
 