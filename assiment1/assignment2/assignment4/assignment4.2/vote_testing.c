#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of age\n");
	scanf("%d",&num);
	printf("Age:%d\n",num);
	if(num<18)
	{
		printf("not age for giving vote");
	}
	if(num>=18)
	{
		printf("age for giving vote");
	}
	return 0;
}
