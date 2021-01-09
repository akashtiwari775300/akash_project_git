#include<stdio.h>
int main() 
{
	int arr[10],i=0,j=1,c;int k=0;
	printf("Enter the number of arry\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("adjestance arry\n");
	for(i=0;i<5;i++)
	{
		c=arr[k];
		arr[k]=arr[j];
		arr[j]=c;
		k=k+2;
		j=j+2;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}


}
