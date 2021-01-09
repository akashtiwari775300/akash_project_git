#include<stdio.h>
int main()
{
	int r;
	float a,v;
	printf("Enter the number of radious\n");
	scanf("%d",&r);
	printf("%d\n",r);
	a=4*3.14*r*r;
	v=4/3*3.14*r*r;
	printf("area of radious:%f\n",a);
	printf("volume of radious:%f\n",v);
	return 0;
}

