#include <stdio.h>
int main()
{
    if (sizeof(char) > -1)
        printf("Yes!");
    else
        printf("No!");
    return 0;
}