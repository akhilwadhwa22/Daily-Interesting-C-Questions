#include<stdio.h> 
char* foo() 
{ 
    char str[] = "Hello World";     
    return str; 
} 
int main() 
{ 
    printf("%s\n", foo());
    return 0;
}
