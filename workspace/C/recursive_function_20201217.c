#include <stdio.h>

int rec(int);

int main()
{
    int a, fact;
    printf("inter the value \n");
    scanf("%d", &a);
    fact = rec(a);
    printf("factorial value %d", fact);
    return 0;
}
int rec(int x)
{
    int f;
    if (x == 1)
    {
        return (1);
    }
    else
    {
        f = x * rec(x - 1);
        return (f);
    }
}
3