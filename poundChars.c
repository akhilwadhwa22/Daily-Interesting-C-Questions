#include<stdio.h>

#define foo(p1,p2) p1##p2 
int main() 
{ 
    int num1 = 100;
    printf("%d\n", foo(num,1));

   return 0; 
}
