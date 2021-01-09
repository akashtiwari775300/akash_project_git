#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		printf("\n%d\n",i);
	}
	for(i=num;i>0;i--)

	{
		fact=i*fact;
	}
	printf("\n factorial number:%d\n",fact);
}
	
