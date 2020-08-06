#include <stdio.h>
int foo(int x, int y) 
{ 
    if (x != 0 && y != 0) 
        return printf("%*c%*c", x, ' ', y, ' '); 
    else
        return x != 0 ? x : y; 
} 
int main() 
{  
    printf("\nCase1: %d\n", foo(4, 7));
    printf("Case2: %d", foo(10, 0));
    return 0; 
} 

https://stackoverflow.com/questions/33256032/what-is-cc-in-printf
https://www.quora.com/How-does-printf-*c-*c-x-y-add-two-numbers
https://www.quora.com/What-is-the-purpose-of-*c-*c-in-C
