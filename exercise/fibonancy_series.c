#include <stdio.h>
int largest(int x,int y);
int display(int);
int main()
{
	int x, y ,l;
	printf("enter two no:");
	scanf("%d%d",&x,&y);
	l=largest(x,y);
	display (l);
	return 0;
}
int display(int large)
{
	printf("largest is:%d",large);
}
int largest (int a,int b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}

}
