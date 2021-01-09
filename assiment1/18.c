
#include <stdio.h>
#include <math.h>
int main()
{
	int p;

	float a,r,t, ci;
	printf("enter principal,rate & time");
	scanf("%d%f%f",&p,&r,&t);
	a=(1+r/100.0);
	ci=p*pow(a,t);
	printf("ci=%f",ci);
	return 0;

}
