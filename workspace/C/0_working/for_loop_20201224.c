#include<stdio.h>
int main()
{
     char a=10,i;
     for(i=0;i<=100;i++)
    {
        printf("value is a(%d)=%d(0x%x)\n",i,a,a);
        //printf("Address of a = %p\n",&a);
        a--;
    }
    return 0;
    
}