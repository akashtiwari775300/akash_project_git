#include <stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter the three side of a tringal:\n");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3)
	{
		printf("\n This is a equileteral tringal\n");
	}
	else if(side1==side2||side2==side3||side1==side3)
	{
		printf("\n This is an isosceles tringal\n");
	}
	else
	{
		printf("\n This is a scalene tringle\n");
	}
	return 0;
	


}
