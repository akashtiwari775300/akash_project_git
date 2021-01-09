#include<stdio.h>
int main()
{
	int num;
	printf("Enter the test score number\n ");
	scanf("%d",&num);
	if(num>=90 && num <=100)
	{
		printf("Grade A");
	}
	else if(num>=70 && num<=79)
	{
		printf("Grade B");
	}
	else if(num>=0 && num<=59)
	{
		printf("Grade F");
	}
	else if(num>=80 && num<=89)
	{
		printf("Grade B");
	}
	else if(num>=60 && num<=69)
	{
		printf("Grade D");
	}
	else
	{
	printf("invailid");
	}
	return 0;

}
