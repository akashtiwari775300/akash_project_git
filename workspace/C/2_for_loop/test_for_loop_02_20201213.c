#include<stdio.h>
int main()
{
    int table_start_from,table_end_to,table_of,index_of;
    printf("tabal jaha se musjhe start krni h\n");
    scanf("%d",&table_start_from);
    printf("table jaha mujhe end krni h\n");
    scanf("%d",&table_end_to);
    printf("table start %d and table end %d\n",table_start_from,table_end_to);
    for(table_of=table_start_from;table_of<=table_end_to;table_of++)
    {
        printf("table of:%d\n",table_of);
        for(index_of=1;index_of<=10;index_of++)
        {
        //
        printf("%dx%d=%d\n",table_of,index_of,(table_of*index_of));
        }
    }
    return 0;
    }


