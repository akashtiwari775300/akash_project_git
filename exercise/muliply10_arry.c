#include<stdio.h>
int main()
{
	int arr1[5],arr2[5],i;
	printf("Enter the 5 element of arry1:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<5;i++)
	{
		arr2[i]=arr1[i]*(10);
	}
	printf("multiply by 10 in arr1\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr2[i]);
	
	}
}
		
