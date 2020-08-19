#include <stdio.h>  
int main() 
{ 
    int a = 5, num = 625; 
    do { 
        num /= a; 
    } while(a--); 
 
    printf ("%d\n", num); 
    return 0; 
} 