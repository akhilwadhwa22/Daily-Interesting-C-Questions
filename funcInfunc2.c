#include <stdio.h> 
int main() 
{ 
    auto int foo();
    printf("In Main\n"); 
    int foo() 
    { 
        auto void foo2();
        printf("Just for fun1!\n"); 
        void foo2() 
        { 
            printf("Just for fun2!\n"); 
        }
        foo2();
        return 1; 
    } 
    foo(); 
    return 0;
}