#include<stdio.h>
#include<string.h>

int main() 
{
	//Case 1
	//char arr[]="Hello World";
	//Case 2
	//char arr[11]="Hello World";
	//Case 3
	//char arr[11]={'H','e','l','l','o',' ','W','o','r','l','d'};
	//Case 4
	//char *arr = "Hello World";
	//printf("%lu\n",sizeof(arr));
	//printf("%lu\n",strlen(arr));

    // char arr[11]="Hello World";
    // char arr1[11]="Hello World";
    // char arr2[11]="Hello World";
    // printf("%lu %lu\n",sizeof(arr),strlen(arr));
    // printf("%lu %lu\n",sizeof(arr1),strlen(arr1));
    // printf("%lu %lu\n",sizeof(arr2),strlen(arr2));
    
    char arr[11]="Hello World";
    char arr1[11]="Hello World";
    char arr2[11]="Hello World";
    printf("%lu %lu %p\n",sizeof(arr),strlen(arr),arr);
    printf("%lu %lu %p\n",sizeof(arr1),strlen(arr1),arr1);
    printf("%lu %lu %p\n",sizeof(arr2),strlen(arr2),arr2);
    char *p=arr2;
    while(*p!='\0')
    {
        printf("%c @ %p\n",*p,p);
        p+=1;

    }
    //printf("Loop ends\n");
    printf("%d @ %p\n",*p,p);

	return 0;
}
