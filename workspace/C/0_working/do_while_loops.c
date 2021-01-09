#include<stdio.h>
int main()
{
    int num,index=0;
    printf("enter the integer number");
    scanf("%d",&num);
    do
    {
        index=index+1;
        printf("number is:%d\n",index);
    }
    while(index<num);
    return 0;
}