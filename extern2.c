#include<stdio.h>
#include<stdlib.h>

//extern int x;


// void foo(){
// 	int x = 10;
//     printf("%p\n", &x);
// }
int main () 
{
	//case 1
    // x= 10;
    // printf("%d", x);
	//foo();
    //case 2
    int x = 10;
    printf("%p\n", &x);

    //case 3 : 
	// extern int x =5;
 // 	x = 10;
 // 	printf("%d", x);
    
    return 0;
}
