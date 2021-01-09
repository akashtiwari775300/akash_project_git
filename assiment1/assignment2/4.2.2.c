#include <stdio.h>
int eo(int);
int main()
{
	int a;
	printf("enter two number");
	scanf("%d",&a);
	eo(a);



	return 0;
}
int eo(int m)
{
	int x;
	x=m%2;
	if(x==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	return 0;
}
	
	


