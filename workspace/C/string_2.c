#include<stdio.h>
int main()
{
    char name [12];
    int i=0;
    printf("enter the name\n");
    scanf("%c",name);
    while(name[i]!='\0')
    {
    printf("%c is stored at %p\n",name[i],&name[i]);
    i++;
    }
    return 0;

}




