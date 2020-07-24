#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *artist = (char *) malloc(0); //Allocate memory to artist

	//Case1
	printf("%lu",strlen(artist));
	free(artist);

	//Case2
	artist="Hello";
	printf("%lu",strlen(artist));
	free(artist);
	
	return 0;
}
