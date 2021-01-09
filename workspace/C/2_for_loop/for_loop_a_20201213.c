#include<stdio.h>
int main()
{
    int user_enter1,user_enter2,row,colum;
    printf("enter the number of when start the table\n");
    scanf("%d",&user_enter1);
    printf("enter the number of when end the table\n");
    scanf("%d",&user_enter2);
    printf("table of %d%d\n",user_enter1,user_enter2);
    for(row=user_enter1;row<=user_enter2;row++)
    {
        printf("\nTable of %d\n",row);
        for(colum=1;colum<=10;colum++)
        {
            printf("%dx%d=%d\n",row,colum,(row*colum));
        }
        
    }


    return 0;

}