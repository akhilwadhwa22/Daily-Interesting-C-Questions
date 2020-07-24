#include <stdio.h>
 
int main()
{
    int a[][] = {{5,6},{7,8}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
    return 0;
}