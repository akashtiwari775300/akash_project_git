#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	printf("enter number a=%d and b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("swap number a=%d and b=%d\n",a,b);

	return 0;

}
