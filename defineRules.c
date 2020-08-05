#include<stdio.h>
#define square(x) x*x

int main() 
{ 
  int num1,num2; 
  num1 = 36/square(6); 
  num2= square(6-2);
  printf("%d, %d",num1,num2); 
  return 0; 
}
