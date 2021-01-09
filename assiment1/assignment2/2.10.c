

                 // This program is use 3 reverse numbber        

            

#include<stdio.h>
int main()
{
	int num,quies,rem,quies1,rem1,quies2,rem2;

	printf("Enter the number\n");
	scanf("%d",&num);
	printf("number=%d\n",num);
	quies=num/10;
	rem=num%10;
	quies1=quies/10;
	rem1=quies%10;
	quies2=quies1/10;
	rem2=quies1%10;
	printf("reverse:%d %d %d ",rem,rem1,rem2);
	return 0;
	
	}
