#include<stdio.h>
int main()
{
	int arr[10];
	int i,sum,product;
	printf("Enter the number of arry\n");
	for(i=0;i<10;i++)
	{
		printf("enter arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	sum=0;
	product=1;
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
		product=product*arr[i];
	}
		printf("\nsum of arry is:%d\n",sum);
		printf("\nproduct:%d\n",product);
		return 0;




}
