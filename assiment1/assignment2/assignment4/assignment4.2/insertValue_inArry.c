#include<stdio.h>
int main()
{
	int arr[5],i,pe=6,j=0;
	printf("Enter the number of arry\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to insert\n");
	scanf("%d",&pe);
	for(i=0;i<5;i++)
	{
			j++;
		if(pe<arr[j])
		{
			break;
		}
	}

//	int arr[6];
	for(i=4;i<j;i++)
		{
		 arr[i+1]=arr[i];
		 }

		 arr[j]=pe;
	printf("Enter the number of arry\n");
	for (i=0;i<=5;i++)
	{
		printf("\t%d",arr[i]);
	}






}
