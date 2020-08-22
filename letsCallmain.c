#include <stdio.h>
int main()
{
    static int num=4;
    if (--num)
    {
        printf("%d ",num);
        main();
    }
    return 0;
}
