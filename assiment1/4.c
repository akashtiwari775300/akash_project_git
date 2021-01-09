#include<stdio.h>
int main()
{
	int a; float b; char g;

	printf("\n");
	printf("original uninitialized value  int a = %d \n",a);
	printf("enter the new value for int a : ");
	scanf("%d",&a);
	printf("you entered the new value  int a = %d  \n",a);

	printf("\n");
	printf("original uninialized value float b=%f\n",b);
	printf("inter the new value for float b=:");
	scanf("%f",&b);
	printf("you enter new value float b=%f \n",b);

	printf("\n");
	printf("origional uninitialized valu char g=%c \n",g);
	printf("enter the new value for char g: ");
	scanf(" %c",&g);
	printf("you enter the new value char g=%c\n",g);



}	
