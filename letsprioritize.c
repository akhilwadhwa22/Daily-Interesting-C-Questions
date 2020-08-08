#include<stdio.h>

int main()
{
int a = 1, b = 1;
int c = ++a || b++;
printf("%d\n%d\n%d\n",c,b,a);
int d = b-- && --a; 
printf("\n%d\n%d\n%d\n%d\n",d,c,b,a);

return 0;
}