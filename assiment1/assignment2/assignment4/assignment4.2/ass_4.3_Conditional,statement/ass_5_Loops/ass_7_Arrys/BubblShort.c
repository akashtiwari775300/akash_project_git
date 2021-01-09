#include<stdio.h>
int main()
{
	int  num,temp, i,j,a[5];
        printf("Enter the total number of Element\n");
	scanf("%d",&num);
	printf("Enter the arry element:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n list sorted in ascending order:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	return 0;
}





