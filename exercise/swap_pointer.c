#include<stdio.h>
int main()
{
	int a1,b2,temp;
	printf("Enter the value of 1:\n");
	scanf("%d",&a1);
	printf("Enter the value of 2:\n ");
	scanf("%d",&b2);
	printf("value:a1=%d and value:b2=%d\n",a1,b2);
	temp=a1;
	a1=b2;
	b2=temp;
	printf("\nvalue:%d%d%d\n",temp,a1,b2);
	return 0;




}

