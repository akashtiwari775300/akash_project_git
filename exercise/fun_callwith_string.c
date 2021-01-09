#include<stdio.h>
int sum (int , int);
int main()
{
	printf("sum of num1:%d,num2:%d is %d\n",10,11,sum(10,11));
	
	printf("sum of num1:%d,num2:%d is %d\n",12,13,sum(12,13));
	printf("sum of num1:%d,num2:%d is %d\n",15,17,sum(15,17));
	printf("sum of num1:%d,num2:%d is %d\n",10,11,sum(10,11));
	printf("sum of num1:%d,num2:%d is %d\n",13,15,sum(13,15));
	printf("sum of num1:%d,num2:%d is %d\n",22,33,sum(22,33));
	printf("sum of num1:%d,num2:%d is %d\n",100,110,sum(100,110));
	printf("sum of num1:%d,num2:%d is %d\n",55,67,sum(55,67));
	printf("sum of num1:%d,num2:%d is %d\n",56,56,sum(56,56));
	printf("sum of num1:%d,num2:%d is %d\n",5,4,sum(5,4));
	printf("sum of num1:%d,num2:%d is %d\n",45,6,sum(45,6));
	printf("sum of num1:%d,num2:%d is %d\n`",8,2,sum(8,2));
	
}
int sum (int a ,int b)
{
	return(a+b);


}
