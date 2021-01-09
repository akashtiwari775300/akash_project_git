#include <stdio.h>
int main()
{
	int ye;
	printf("Enter the year\n");
	scanf("%d",&ye);
	if(ye%4==0)
	{
		printf("This is leap year\n");
	
	}
	else  if(ye%400==0)
	{
		printf("This is leap year\n");
	}
	
	
	else if (ye%100==0)
	{
		printf("This is not leap year\n");
	}
	else 
	{
		printf("This is not leap year\n");

	}
	
	return 0;
}

