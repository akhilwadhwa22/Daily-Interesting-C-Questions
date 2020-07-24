#include <stdio.h> 
foo(char x) 
{ 
    return x*x; 
} 

int main(void) 
{ 
    printf("%d", foo('5')); 
    return 0; 
}