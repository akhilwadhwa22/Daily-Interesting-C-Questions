#include<stdio.h> 
int  main() 
{ 
   unsigned int x = -1;
   int y = ~0;
   if (x == y) 
      printf("x and y are same!"); 
   else
      printf("x and y are not same!"); 
   return 0; 
}