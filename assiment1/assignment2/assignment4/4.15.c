#include <stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter the side of tringal");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1+side2>side3)
	{
		if(side2+side3>side1)
		{
			if(side1+side3>side2)
			{
				printf("tringal is valid");
			}
			else
			{
				printf("tringal is not valid");
		}
		}
		else
		{
			printf("tringal is not valid");
	}
	}
	else
	{
		printf("tringal is not valid");
	}
	return 0;
	

}





                                  // the tringal is valid //
