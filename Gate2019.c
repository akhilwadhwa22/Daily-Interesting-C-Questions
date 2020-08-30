#include <stdio.h>
int main()
{
	int a[] = {2, 4, 6, 8, 10};
	int i, sum = 0, *b = a + 4;
	for (i = 0; i < 5; i++)
		sum = sum+ (*b-i)- *(b-i);
	printf ("%d\n", sum);
	return 0;
}


// i=0->sum=0+(10)-10=0
// i=1->sum=0=0+9-8=1
// i=2->sum=1+8-6=3
// i=3->sum=3+7-4=6
// i=4->sum=6+6-2=10