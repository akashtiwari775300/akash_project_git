#include<stdio.h>
#include<math.h>
double getdiameter (double radius);
double getcircumfrence (double radius);
double getarea (double radius);
int main()
{
    float dia,circ,area,radius;
    printf("enter the value of circule radius\n");
    scanf("%f",&radius);
    dia= getdiameter ( radius);
    circ= getcircumfrence ( radius);
    area= getarea ( radius);
    printf("the diameter of circule is : %.2f\n",dia);
    printf("the circumfrence of circule is : %.3f\n",circ);
    printf("the area of circule is : %.4f\n",area);
    return 0;
}
double getdiameter (double radius)
{
    return (2*radius);
}
double getcircumfrence (double radius)
{
    return (2* M_PI* radius);
}
double getarea (double radius) 
{
    return (M_PI* (radius * radius));
    
}