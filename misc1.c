#include <stdio.h>
void foo1()
{
    printf("2020 Graduate");
}

char foo2()
{
    printf("Looking for Full-time opportunities");
    return 0;
}
 
int main()
{
    printf("Size1=%zu\n", sizeof(foo1()));
    printf("Size2=%zu\n", sizeof(foo2()));
    return 0;
}
