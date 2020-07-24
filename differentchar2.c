#include<stdio.h>
#include<string.h>

int main() 
{
    char arr0[11]= "Hello World";
    char arr1[11]= "Hello World";
    char arr2[11]= "Hello World";
    printf("%lu %lu\n",sizeof(arr0),strlen(arr0));
    printf("%lu %lu\n",sizeof(arr1),strlen(arr1));
    printf("%lu %lu\n",sizeof(arr2),strlen(arr2));
    
	return 0;
}
