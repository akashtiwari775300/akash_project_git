#include<stdio.h>
int swap(int,int);
int main()
{
	int num1,num2,num3;
	printf("Enter the number of element num1\n");
	scanf("%d",&num1);
	//swap(num1,num2);
	printf("Enter the number of element num2\n");
	scanf("%d",&num2);
	swap(num1,num2);
//	printf(")

}
int swap(int x,int y)
{
	int yet;
	yet=x;
	x=y;
	y=yet;
	printf("swap value is:%d%d\n",x,y);
}


