#include <stdio.h> 
int main() 
{ 
    int x = 5;
    int y = (x++, 
         printf("x = %d\n", x), 
         ++x, 
         printf("x = %d\n", x), 
         x++);
    
    printf("y = %d\n", y); 
    printf("x = %d\n", x);

    int z = (x++, ++x); 
    printf("z = %d\n", z);
    
    return 0; 
}

