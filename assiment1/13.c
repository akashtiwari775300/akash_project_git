#include<stdio.h>
int main()
{
	int divisor=100;
	int divider=30;
	int quotient;
	int reminder;
	printf("enter the value  of divisor,divider ");
	scanf("%d%d\n",&divisor,&divider);
	quotient=divisor/divider;
	reminder=divisor%divider;
	printf("value of %d%d\n",quotient,reminder);
	return 0;
	}
