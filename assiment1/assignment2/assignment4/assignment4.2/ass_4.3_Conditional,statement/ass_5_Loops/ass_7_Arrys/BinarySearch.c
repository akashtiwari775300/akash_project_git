#include<stdio.h>
int main()
{
	int arr[10],i,low,high,mid,key;
	printf("Enter the element of arry\n:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the  of search in arry:");
	scanf("%d",&key);
	low=0;
	high=9;
	mid=(high+low)/2;
//	printf("mid number is:%d",mid);
	while(high>=low)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			printf("Element found at %d\n",mid);
			break;
		}
		else
		{
			if(arr[mid]>key)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	if(key!=arr[mid])
	{
		printf("\n** element not found **\n");
	}
	return 0;
}


