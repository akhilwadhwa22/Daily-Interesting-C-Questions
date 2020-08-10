#include <stdio.h> 

int main() 
{ 
    int x = 10, y = 20; 
    x ^= y ^= x ^= y; 
    printf("x=%d,y=%d", x, y); 

    return 0; 
} 
