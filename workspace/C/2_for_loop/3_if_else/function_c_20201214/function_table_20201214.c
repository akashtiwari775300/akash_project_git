#include<stdio.h>
void tables(int,int);
int main()
{

    int table1,table2
    
    
    ;
printf("enter the number when start the table\n ");
scanf("%d",&table1);
printf("enter the number when end the table\n ");
scanf("%d",&table2);
printf("%d%d\n",table1,table2);
 tables( table1,table2 );
 return 0;
}
void tables(int table1,int table2)
{
    int middle_table,end_table;
for(middle_table=table1;middle_table<=table2;middle_table++)
{
    printf("table of=%d",middle_table);
    for(end_table=1;end_table<=10;end_table++)
    {
        printf("table of=%dx%d=%d\n",middle_table,end_table,(middle_table*end_table));
    }
}
}

