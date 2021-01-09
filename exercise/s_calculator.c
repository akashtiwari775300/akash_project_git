#include<stdio.h>
int main()
{
	char operator;
	double fristnumber,secondnumber;
	printf("Enter the operator(+,-,*,/):");
	scanf("%c",&operator);
	printf("Enter two number:");
	scanf("%lf%lf",&fristnumber,&secondnumber);
	switch (operator)
	{
		case'+':
			printf("%.1lf+%.1lf=%.1lf",fristnumber,secondnumber,
		fristnumber+secondnumber);
		break;
		case'-':
		printf("%.1lf+%.1lf=%.1lf",fristnumber,secondnumber,
		fristnumber-secondnumber);
		break;
		case'*':
		printf("%.1lf+%.1lf=%.1lf",fristnumber,secondnumber,
		fristnumber*secondnumber);
		break;
		case'/':
			printf("%.1lf+%.1lf=%.1lf",fristnumber,secondnumber,
		fristnumber/secondnumber);
		break;
		default:
		printf("Error! operator is not currect");
	}
	return 0;
}
		

