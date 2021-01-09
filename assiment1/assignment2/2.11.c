#include<stdio.h>
int main()
{
	int r;
	float a,c;
        
	printf("Enter radious of circule");
	scanf("%d",&r);
	printf("%d\n",r);
	a=3.14*r*r;
	c=2*3.14*r;
	printf("redious is:%f\n",a);
	printf("circumference is:%f\n",c);
	

	return 0;
}
