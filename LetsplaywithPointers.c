#include<stdio.h>
void foo1(int *a) 
{ 
  static int x = 10; 
  a = &x;
}     

void foo2(int *a) 
{ 
  *a=30; 
}   

int main() 
{ 
  int num = 20; 
  int *a = &num; 
  //Case1
  foo1(a); 
  printf("%d\n", *a);

  //Case2
  foo2(a); 
  printf("%d\n", *a);
  return 0; 
}  