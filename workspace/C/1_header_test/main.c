#include <stdio.h>
#include "akash.h"

int main()
{
    int num_1,num_2;
    printf("Hello World!!\n");
    printf("Enter First Value:");
    scanf("%d",&num_1);
    printf("Enter Second Value:");
    scanf("%d",&num_2);

    printf("Values Entered num 1:%d ; num 2:%d\n",num_1,num_2);

    printf("Addition=%d\n",add(num_1,num_2));
    printf("Substaction=%d\n",sub(num_1,num_2));
    printf("Multiplication=%d\n",mul(num_1,num_2));
    printf("Division=%f\n",div(num_1,num_2));
    return 0;
}

