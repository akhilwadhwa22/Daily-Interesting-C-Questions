#include <stdio.h> 

int main()  
{ 
   unsigned int i = 0x76543210; 
   char *c = (char*)&i; 
   printf("%c\n",*c);

   return 0;
}