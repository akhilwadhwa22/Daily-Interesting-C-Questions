#include<stdio.h>
#include<stdint.h>

int foo(uint8_t x){
	uint8_t x1,x2;
	uint8_t mask1=0b00001111;
	uint8_t mask2=0b11110000;
	x1=x&mask1;
	x1<<=4;
	x2=x&mask2;
	x2>>=4;
	return x1|x2;
}
int main()
{	
	uint8_t x=15;
	printf("%d",foo(x));
	return 0;
}
