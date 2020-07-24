#include<stdio.h>
int main() 
{
	int c1 = 0, c2 = 0;
  // FIRST
  	for(int i=0;i<5;i++,c1++) 
    	for(int j=0;j<10;j++, c1++);
    
  // SECOND 
  	for(int i=0; i<10; i++, c2++) 
      	for(int j=0; j<5; j++, c2++); 

	printf("%d\n",c1);
	printf("%d\n",c2);
    return 0;
}

/* Follow Up Question:
	WHICH OF THE 2 LOOPS WILL BE FASTER AND WHY? */

