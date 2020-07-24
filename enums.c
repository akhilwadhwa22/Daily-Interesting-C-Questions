#include<stdio.h>

enum months{Jan=1, Feb, Mar, Apr=8, May, Jun, Jul=9, Aug, Sep=10, Oct, Nov=15, Dec};
//enum summer{Jun=20, Jul, Aug=25, Sep};

int main()
{
	printf("%d\t",Jan);
	printf("%d\t",Feb);
	printf("%d\t",Mar);
	printf("%d\t",Apr);
	printf("%d\t",May);
	printf("%d\t",Jun);
	printf("%d\t",Jul);
	printf("%d\t",Aug);
	printf("%d\t",Sep);
	printf("%d\t",Oct);
	printf("%d\t",Nov);
	printf("%d\n",Dec);
	
	enum months month;
	printf("sizeof(month)=%lu\n",sizeof(month));

	return 0;
}
