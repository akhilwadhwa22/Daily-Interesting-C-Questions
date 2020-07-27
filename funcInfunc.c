#include <stdio.h> 

int main() 
{ 
    printf("In Main"); 
    int foo() 
    { 
        printf("Just for fun1!"); 
        void foo2() 
        { 
            printf("Just for fun2!"); 
        } 
        return 1; 
    } 
    foo2(); 
    return 0;
}