#include <stdio.h>

int main()
{
	int d1,d2,fit,inch;
	printf("Enter the number of d1\n");
	scanf("%d",&d1);
	printf("Enter the num of d2\n");
	scanf("%d",&d2);
	fit=d1/12;
	inch=d1*12;
	printf("value of fit:%d\n",fit);
	printf("value of inch:%d\n",inch);
	return 0;

}
