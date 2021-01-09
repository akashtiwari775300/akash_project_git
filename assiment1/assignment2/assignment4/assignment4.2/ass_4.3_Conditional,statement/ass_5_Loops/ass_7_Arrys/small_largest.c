#include<stdio.h>
int main()
{
	
	int arr[5];
	int i,a,small=0,large;
	printf("Enter the number of arry\n");
	for(i=0;i<5;i++)
	{
	//	printf("Enter the value:%d",i);
		scanf("%d",&arr[i]);

	}
	i=0;
	small=arr[i];
	for(i=0;i<5;i++)
	{
	if(small>=arr[i])
	{
		small=arr[i];	
	}
	}
		printf("smallest number is:%d\n",small);
		i=0;
	large=arr[i];
	for(i=0;i>5;i++)
	{
		if(large>=arr[i])
		{
			large=arr[i];
		}
	
		}
	printf("largest number is:%d\n",large);
	
	
	}





