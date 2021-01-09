#include <stdio.h>
int main()
{	

	int i,j,k,l=6;
	for(j=0;j<2;j++)
	{

		for(i=l;i>0;i--)
		{
			printf("#");
		}
		l--;
		printf("\n");
		for(k=0;k<2;k++)
		{
			printf("#\n");
		}
	}
	return 0;
}
