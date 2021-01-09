#include <stdio.h>
int main()
{
	int cp,sp,profit_amount;
	printf("enter the price cp,sp");
	scanf("%d%d",&cp,&sp);
	if(cp<sp)
	{
		printf("profit");
		profit_amount=(sp-cp);
			printf("profit_amount=%d",profit_amount);
	
	}
	 else  
	{
		printf("loss");
	}
	return 0;




}
