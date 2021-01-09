#include <stdio.h>
int main()
{
	int arr1[5],arr2[5],arr3[10];
	int *ptr1,*ptr2,*ptr3;
	ptr1=arr1;
	ptr2=arr2;
	ptr3=arr3;
	int i,j,k,size;
	printf("Enter the number of arry1\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr1+i);
	}
	printf("Enter the number of arry2\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr2+i);
	}

	printf("\nfirst array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr1+i));
	}
	printf("\nfirst array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(ptr2+i));
	}
	/*****************marge**sort************/
	size=10;
	i=0;
	j=0;
	for(k=0;k<size;k++)
	{
		if(i<5)
		{
			if(*(ptr1+i)<*(ptr2+j))
			{
				*(ptr3+k)=*(ptr1+i);
				i++;
			}
			else if(*(ptr1+i)>*(ptr2+j))
			{
				*(ptr3+k)=*(ptr2+j);
				j++;
			}
		
			else 
			{
				*(ptr3+k)=*(ptr2+j);
				*(ptr3+k+1)=*(ptr1+i);
				i++;
				j++;
				k++;
			}
		}
		else
		{
			*(ptr3+k)=*(ptr2+j);
			j++;
		}
	}
	printf("\nsorted arry is\n");
	for(k=0;k<10;k++)
	{
		printf("%d\t",*(ptr3+k));
	}
	printf("\n");
		
}				

		
	









































































































