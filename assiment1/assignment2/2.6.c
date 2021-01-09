#include<stdio.h>
int main()
{
	int dist;
        float liter,avg;
	printf("enter the any two number ");
	scanf("%d",&dist);
	scanf("%f",&liter);
	printf("distance in km:%d\n",dist);
	printf("fuel in liter:%f\n",liter);
	avg=dist/liter;
		printf("average=%.2f",avg);
	return 0;





}
