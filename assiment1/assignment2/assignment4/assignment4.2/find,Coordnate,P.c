#include<stdio.h>
int main()
{
	int co1,co2;
	printf("Enter the number of coordinator point\n");
	scanf("%d%d",&co1,&co2);
	if(co1>0 && co2>0)
	{
		printf("frist coordinate point");
	}
	else if(co1<0 && co2>0)
	{
		printf("second coordinate point");
	}
	else if(co1>0 && co2<0)
	{
		printf("Third coordinate point");
	}
	else if(co1<0 && co2>0)
	{
		printf("fourth coordinate point");
	}
	else if (co1==0 && co2==0)
	{
		printf("origine point");
	}
	return 0;
}
			
