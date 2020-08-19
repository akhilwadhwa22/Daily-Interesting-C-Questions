#include <stdio.h> 
int main() 
{ 
    int x; 
    //Case1
    x = 6 > 7 ? 0 != 2 < 3 == 0 ? 30 : 20 : 10;
    printf("Value of x:%d\n",x); 

    //Case2
    x = 6 < 7 ? 0 != 2 < 3 == 0 ? 30 : 20 : 10;  
    printf("Value of x:%d\n",x); 
    return 0; 
}