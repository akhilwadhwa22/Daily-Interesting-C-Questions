#include<stdio.h>   
int main() 
{ 
  char arr1[] = "Hello\0 World"; 
  char *arr2 = "Hello\0 World"; 
  printf ("arr = %s, sizeof(arr) = %lu \n", arr1, sizeof(arr1)); 
  printf ("str = %s, sizeof(str) = %lu \n", arr2, sizeof(arr2)); 
  return 0; 
}
