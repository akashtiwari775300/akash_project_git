#include<stdio.h>
int main()
{
	int num,q,r,q1;
	printf("enter the no from user");
	scanf("%d",&num);
	printf("\n%d",num);
	q=num/10;
	r=num%10;
	q1=q%10;
	printf("reverse number:%d %d %d",r);
	return 0;
	
}



