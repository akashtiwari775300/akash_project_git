#include <stdio.h>
int main()
{
	int quentity,dis=0;
	float rate,total;
	printf("enter quentity and rate\n");
	scanf("%d%d",&quentity,&rate);
	if (quentity>1000)
		dis=10;
	total=(quentity*rate)-(quentity*rate*dis/100);
	printf("total expences: %f\n",total);

	





}
