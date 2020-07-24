#include <stdio.h>
int main()
{
    int i = 5;
    switch (i)
    {
        case '5': printf("Hello");
        case '10': printf(" World");
            break;
        default: printf("Hey default");
    }
    return 0;
}
