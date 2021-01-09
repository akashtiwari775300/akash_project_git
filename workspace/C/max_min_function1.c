#include<stdio.h>
int maximum(int num1,int num2);
int minimum(int num1,int num2);
int main()
{
    int num1,num2,max,min;
    printf("enter the integer value\n");
    scanf("%d%d",&num1,&num2);
    max=maximum(num1,num2);
   min= minimum(num1,num2);
   printf("the maximum value is :%d\n",max);
   printf("the min value is :%d\n",min);
   return 0;
}
int maximum(int num1,int num2)
{
    return (num1>num2)? num1 : num2;

}
int minimum(int num1,int num2)
{
    return (num1<num2)? num1:num2;
}