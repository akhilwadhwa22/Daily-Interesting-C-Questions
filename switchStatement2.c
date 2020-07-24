#include<stdio.h> 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
int main() 
{ 
    int a = 4; 
    switch (a) 
    { 
    case Mon:
        printf("ABC\n"); 
        break;
    case Tue:
        printf("EFG\n"); 
        break;
    case Wed:
        printf("HIJ\n"); 
        break;
    case Thur:
        printf("KLM\n"); 
        break;
    case Fri:
        printf("NOP\n"); 
        break;
    default:
        printf("Its weekend!!");
    } 
} 
