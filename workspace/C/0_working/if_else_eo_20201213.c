#include<stdio.h>
int main()
{
    int var;
    printf("enter the number of var\n");
    scanf("%d",&var);
    if(var%2==0)
    {
        printf("%d : is number is even",var);
    }
    else 
    {
        printf("%d : is number is odd",var);
    }
    return 0;
}