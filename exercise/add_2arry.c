#include<stdio.h>
int main()
{
	int arr1[5],arr2[5],arr3[5],i;
	printf("Enter the number of arry1 \n ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number of arry2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("add two number of arry\n");
	for(i=0;i<5;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	for(i=0;i<5;i++)
	{
	printf("\nadd number=%d\n",arr3[i]);
	}
}

		
