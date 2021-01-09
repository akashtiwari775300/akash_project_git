#include <stdio.h>
#include <math.h>
int main()
{
	int x1,y1,x2,y2,a,b,c;
	float add;
	printf("Enter two cordinate point\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	printf("input:%d%d%d%d",x1,y1,x2,y2);
	a=(x2-x1)*(x2-x1);
	b=(y2-y1)*(y2-y1);
	c=(a+b);
	add=sqrt(c);
	printf("\n distance of pont:%f",add);
	return 0;




}
