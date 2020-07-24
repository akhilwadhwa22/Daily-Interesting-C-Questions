#include<stdio.h> 
int main() 
{
    //'A'= 65, 'B'=66, 'C'=67
    char ch[] = {'A', 'B', 'C'};
    char *ptr = ch; 
    char *ptr2 = ch;
    int i = (*ptr++ + ++*ptr2) - 15;
    printf("%d", i);
    return 0; 
}
