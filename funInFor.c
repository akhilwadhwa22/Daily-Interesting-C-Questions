#include<stdio.h> 
int foo() 
{ 
    int static num = 10; 
    return num--; 
}
int main() 
{
    for (foo(); foo(); foo())
    { 
        printf("\n%d\n ", foo()); 
    } 
    return 0; 
} 
