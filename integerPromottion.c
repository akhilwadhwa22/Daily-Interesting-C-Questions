#include <stdio.h> 
  
int main() 
{ //0xf7 is the ASCII for "÷" (from the extended ASCII table)
    char a = 0xf7; 
    unsigned char b = 0xf7; 

    if (a == b) 
      printf("\nSame"); 
    else
      printf("\nNot Same"); 
    return 0; 
}