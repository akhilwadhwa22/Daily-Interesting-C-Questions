#include<stdio.h>

void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}  
   
int main()
{
  char *str1 = "Hello";
  char *str2 = "World";
  swap(str1, str2);
  printf("str1:%s\nstr2:%s\n", str1, str2);
  return 0;
}