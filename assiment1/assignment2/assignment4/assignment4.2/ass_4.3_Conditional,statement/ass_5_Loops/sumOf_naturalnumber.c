#include<stdio.h>
int main()
{
	int i,j,num,add=0;
	printf("Enter the nutural numer\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\t%d",i);
	}
	for(i=1;i<=num;i++)
 	{
			add=i+add;
	}
	printf("\n add natural number: %d\n",add);
	return 0;
}
	
	

