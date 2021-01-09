#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    switch(age)
    {
        case 43:
        printf("mask is 43\n");
        break;
        
        case 12:
        printf("the age is 12\n");
        case 20:
        printf("the age is 20\n");
        default :
        printf("your age is not mensond");
        break;
    }
}