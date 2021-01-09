#include<stdio.h>
int main()
{
    int arrays[5][4],i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter the value for arrays[%d][%d]\n",i,j);
            scanf("%d",&arrays[i][j]);
        }
    }
    return 0;
}