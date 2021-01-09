#include <stdio.h>
int main()
{
	int arr[5];
	int i,j,swap;
	printf("Enter the element of arry:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
/*			printf("\n%d%d\n",arr[i],arr[j]);
		}
	}  */
	if(arr[i]>arr[j])
	{
		swap(&arr[i],&arr[j]);
	}
}
}











/*	printf("Enter the number of arry2:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&arr2[i]);
	}
	printf("%d%d",arr1[i],arr2[i]); 
	*/
}



