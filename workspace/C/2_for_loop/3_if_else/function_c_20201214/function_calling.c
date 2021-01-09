#include<stdio.h>


void function1(int num1)
{
printf("value of num1= %d\n",num1 );
}

int main()
{
    printf("starting main function\n");
    function1(6);
    printf("exiting main function\n");
    return 0;
}