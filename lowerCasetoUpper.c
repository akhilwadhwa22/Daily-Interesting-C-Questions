#include<stdio.h>
char foo1(char c)
{
	return c&~32; 
}

char foo2(char c)
{
	return c&~' ';
}

int main()
{
	printf("%c\t",foo1('A'));
	printf("%c\n",foo1('z'));
	printf("%c\t",foo2('A'));
	printf("%c\n",foo2('z'));
	return 0;
}