#include<stdio.h>
int main()
{
	int a[2]={10,20};
	
	void *ptr1=&a;
	void *ptr2=&a;

	ptr1++;
	ptr2=ptr2+sizeof(int);
	
	printf("%d\n",*(int*)ptr1);
	printf("%d\n",*(int*)ptr2);
	
	return 0;
}

//Little Endian Format
// 	2000	    2001         2002 	    2003       	  2004	      2005        2006 	      2007     //Assumed memory locations
//1010 0000  0000 0000   0000 0000   0000 0000     0010 1000   0000 0000   0000 0000   0000 0000
//-------------------------------------------      ---------------------------------------------
// 					|												|	
// 					10   											20



//ptr++




//20->
//0001 0100 0000 0000 0000 0000 0000 0000
//0000 0000 0000 0000 0000 0000 0001 0100