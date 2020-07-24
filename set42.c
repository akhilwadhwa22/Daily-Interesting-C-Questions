#include <stdio.h>
#include <string.h>

void set_42(int *p_value)
{
	*p_value=42;
}

int set_number(void)
{
	static int *p_value;
	set_42(p_value);
	return *p_value;
}

int main()
{	
	printf("value:%d\n",set_number());
	return 0;
}