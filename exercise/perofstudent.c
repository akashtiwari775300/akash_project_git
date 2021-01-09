#include <stdio.h>
 void main()
{
	int m1,m2,m3,m4,m5,per;
	printf("enter marks of five sub");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/5;
	/*
	if(per>=60)
		printf("frist divison");
	else
	{
		if(per>=50)
			printf("second devision");
		else
		{
			if(per>=40)
				printf("print third divison");
			else
				printf("fail");
			return 0;
		}
	}
	*/

	printf("\nPercentage = %d ;",per);
	if(per >= 60)
	{
		printf("\nFirst Division");
	}
	else if( (per<60) && (per>=50 ))
 	{
                printf("\nSecond Division");
	}
	else if((per < 50) && (per>=30))
	{
		printf("\nThird Division");
	}
	else
	{
		printf("\nFail");
	}
}
