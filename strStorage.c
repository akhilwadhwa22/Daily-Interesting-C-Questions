#include<stdio.h>

int main()
{	
	//Case 1
	char* str1="I am a 2020 Graduate from NYU.";
	*(str1+10)='1';
	printf("%s",str1);

	//Case 2
	char str2[]="I am looking for full-time Opportunities.";
	*(str2+10)='N';
	printf("%s",str2);
	
    return 0;
}
