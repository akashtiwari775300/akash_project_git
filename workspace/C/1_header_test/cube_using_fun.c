#include<stdio.h>
int cube(int);
 int  main()

{
    int ans,a;
    printf("enter the value\n");
    scanf("%d",&a);
    ans=cube(a);
    printf("the cube value is :%d",ans);
}
int cube(int x)
{
    int r;
    r=x*x*x;
    return r;
}