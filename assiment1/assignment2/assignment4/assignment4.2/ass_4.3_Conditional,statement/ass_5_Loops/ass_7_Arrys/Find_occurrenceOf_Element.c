
#include <stdio.h>

int main()
{

	int arr[6],i,count,num;
	printf("Enter array element\n");
	for (i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number for search:\n");
	scanf("%d",&num);
	for(i=0;i<6;i++)
	{
		if(num==arr[i])
		{
			count++;

		}
	}
	printf("%d\n",count);
	return 0;
}

