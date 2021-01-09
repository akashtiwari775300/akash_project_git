#include<stdio.h>
int main()
{
    int year;
    float sec;
    printf("enter your age in year\n");
    scanf("%d",&year);
    sec=year*365*24*60*60;
    printf("you have live in sec:%f",sec);
    return 0;
}