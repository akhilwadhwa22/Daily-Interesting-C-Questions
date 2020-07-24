#include<stdio.h>
#include<string.h>

int main()
{
	char p[20]; 
	char *s = "hello world"; 
	int length = strlen(s); 
	int i; 

	for (i = 0; i < length; i++) 
     	p[i] = s[length-i];

	printf("%s",p); 
	return 0;
}