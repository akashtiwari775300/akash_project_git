#include<stdio.h>
int main()
{
	int arr[10];
	int i,j,k,pe,c,p:1;
	int *ptr;
	ptr=arr;
	printf("Enter the number of arry\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
 
	        /**********insertion**sort***********/
	for(j=0;j<10;j++)
	{
		p=j+1;
		pe=*(ptr+p);
		c=0;
	
		for(i=0;i<j;i++)
		{
			c++;
			if(pe<*(ptr+i))
		}
	}

	if (c==10)
	{
		break;
	}
	else
	{
		for(k=j;k<10;k++)
		{
			*(ptr+k+1)*(ptr+k);
		}
		*(ptr=i)=pe;
	}
}
printf("\n")
		



		


		
}


