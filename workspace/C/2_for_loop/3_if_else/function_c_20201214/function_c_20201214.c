#include<stdio.h>

int add(int,int);

int main()
{
    int sum;
    printf("enter the sum value");
     sum=add(20,12);
     printf("the value of =%d",sum);
     printf("exit the code");
     return 0;
}

int add(int num1,int num2)
{
    int c;
    c=num1+num2;
    return c;
}