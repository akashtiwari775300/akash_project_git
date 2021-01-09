#include<stdio.h>

int main()
{
	int a,b,c,d,e,large,small;
	printf("Enter the number from user\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("%d%d%d%d%d", a,b,c,d,e);
	large=a;
	if(large<b)
		large=b;
	if(large<c)
		large=c;
	if(large<d)
		large=d;
	if(large<e)
		large=e;
	printf("largest number:%d\n",large);
	small=a;
	if(small>b)
		small=b;
	if(small>c)
		small=c;
	if(small>d)
		small=d;
	if(small>e)
		small=e;
	printf("smallest number:%d\n",small);

}
