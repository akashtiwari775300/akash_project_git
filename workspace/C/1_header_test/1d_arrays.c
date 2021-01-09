#include<stdio.h>
int main()
{
int sub[5],i,total=0;
printf("enter the 5 value\n");
for(i=0 ; i<5 ; i++)
{
    scanf("%d",&sub);
    total=total+sub[i];
}
printf("element are");
for(i=0;i<5;i++)
{
    printf("%d",sub[i]);
}
printf("total number is =%d",sub[i]);

}