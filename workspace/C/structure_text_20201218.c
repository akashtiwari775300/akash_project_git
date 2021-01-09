#include<stdio.h>
int main()
{
    char name[3];
    float price[3];
    int page[3],i;
    printf("enter name,price,page number of 3 books\n");
    for(i=0;i<=2;i++)
    {
    scanf("%c%f%d",name,price,page);
    printf("\n and this is what you enterd\n");
    {
        for(i=0;i<=2;i++)
        {
            printf("%c%f%d",name,price,page);
        }
        return 0;
    }   


}