#include<stdio.h>
int main()
{
	int num,c,a,i;
	printf("Enter the any number\n");
	scanf("%d",&num);
	printf("%d\n",num);
	for(i=2;i<=num/2;i++)
		a=num%i;
	if(a==0)
	{
		printf("number is  not prime ");
	}
	else 
	{
		printf("number is prime");
	}
	return 0;
}
