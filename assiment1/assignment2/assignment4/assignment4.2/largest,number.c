#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three number\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("%d\n%d\n%d\n",num1,num2,num3);
	if(num1>=num2 && num1>=num3)
	{
		printf(" num1 is   largest");
	}
	if(num2>=num1 && num2>=num3)
	{
		printf(" num2 is largest");
	
	}
	if(num3>=num1 && num3>=num2)
	{
		printf("num3 is largest");
	
	
	
	}










	return 0;
}
