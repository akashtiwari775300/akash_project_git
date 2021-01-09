#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int num1,num2;
    int choice,sum1;
    int sub1,mul1,div1;


    printf("press number 1 :for addition\n");       
    printf("press number 2 :for substraction\n");
    printf("press number 3 :for multiplication\n");
    printf("press number 4 :for divison\n");
    printf("press number 5 :for exit the code\n");
    

    printf("Select your choice\n");
    scanf("%d",&choice);

    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second value\n");
    scanf("%d",&num2);


    switch(choice)
    {
        case 1:
          sum1=num1+num2;
          printf("the addi tion is=%d\n",sum1);
          break;
        
        case 2:
            sub1=num1-num2;
            printf("the subtraction is=%d\n",sub1);
            break;
        
        case 3:
            mul1=num1*num2;
            printf("the multiplication is=%d\n",mul1);
            break;
        
        case 4:
            div1=num1/num2;
            printf("the divsion is=%d\n",div1);
            break;

        case 5:
            if (num1&&num2<=5)
            {
                printf("number is alreday use in choice\n");
            }
            else
            {
                printf("code is exit\n");
            }
            
            
    }

//    addition
   int add(int num1,int num2);
   {
       int c=num1+num2;
       return c;
   }
   //    substraction
   int sub(int num1,int num2);
{
    int c=num1+num2;
    return c;
}
  //  multiplication
int mul(int num1,int num2);
{
    int c=num1-num2;
    return c;
}
   //divison
int div(int num1,int num2);
{
    float c=num1*num2;
    return c;
}
}