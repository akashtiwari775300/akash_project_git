#include<stdio.h>
int check(int);
int main()
{
    int num;
    printf("enter the integer value\n");
    scanf("%d",&num);
    check(num);
    
}
int check(int x)
{
    if(x%2==0)
    {
        printf("number is even\n");
    }
    else 
    {
        printf("number is odd\n");
    }
    return 0;
}