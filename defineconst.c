#include<stdio.h>

int main()
{
	/* Declaration vs Definition of a Const Variable*/
	
	//Case 1
	const int var;
	var =10;

	//Case 2
	const int var=10;

	printf("%d\n",var);
	return 0;
}