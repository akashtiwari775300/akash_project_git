#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	printf("Enter the number of element\n");
	for(i=0;i<10;i++)
	{
		printf("Enter arr[%d] value: ",i);
		scanf("%d",&arr[i]);
	}
	printf("print enter the element of arr\n");
	for(i=0;i<10;i++)
	{
		printf("Value of arr[%d]: %d\n",i,arr[i]);
	}
	for(i=0;i<10;i--)
	{
		printf("Enter arr[%d] value: ",i);
		scanf("%d",&arr[i]);
	}
	printf("print reverse number\n");
	for(i=9;i>=0;i--)
	{
		printf("Value of arr[%d]: %d\n",i,arr[i]);
	}





}
