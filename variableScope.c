# include <stdio.h>  

# define print(x)  printf ("%d", x)  
int x;  

void foo2(int z)  
{  
  z += x; 
  print(z);  
}

void foo1(int *y)  
{  
  int x = *y+2;  
  foo2(x);  
  *y = x-1;  
  print(x); 
}  
  
int main()  
{  
  x=5;  
  foo1(&x);  
  print(x); 
  return 0; 
}  
