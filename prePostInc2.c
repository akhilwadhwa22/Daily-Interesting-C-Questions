#include<stdio.h> 

int main() 
{
    int arr[] = {111,222,333,444,555};
    int *ptr = arr;

    // printf("1:*ptr++=%d\n",*ptr++);
    // printf("2:*ptr=%d\n", *ptr);
    // printf("3:*++ptr=%d\n",*++ptr);
    // printf("4:++*ptr=%d\n",++*ptr);
    // printf("5:++*ptr++=%d\n",++*ptr++);
    // printf("6:*ptr=%d\n", *ptr);

    // printf("7:++*++ptr++=%d\n",++(*(++(ptr++))));
    printf("%d\n",*ptr);
    printf("%p\n",ptr);

    printf("%d\n",*++ptr);
    //printf("%p\n",++*ptr);
    //printf("%d\n",*ptr);
    //printf("%p\n",++ptr);
    return 0; 
}


    //printf("6:*++ptr++=%d\n",*++ptr++);
