#include<stdio.h>
int main()
{
int values[10],n,i,sum=0,average;
printf("enter the ten element in the arrys");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
printf("enter the number %d",i+1);
scanf("%d",&values[i]);
sum+=values[i];
}
average=sum;
printf("average=%d",average);
return 0;

}
