#include<stdio.h>
int main()
{
	int  i,arr[5];
	int *ptr;
	ptr=arr;
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<5;i++)
	{
		printf("%p\n",ptr);
	}
	for(i=0;i<5;i++)
	{
		printf("%p",*(ptr+i));

		
	
	}
	


}
