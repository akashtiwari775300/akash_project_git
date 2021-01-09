#include <stdio.h>
int main()
{
	char a,b,c;
	char a1,b1,c1;
	printf("Enter any charactor\n");
	scanf("%c%c%c",&a,&b,&c);
	printf("The reverse of%c%c%c",a,b,c);
	a1=c;
	b1=b;
	c1=a;
	printf(" is %c %c %c ",a1,b1,c1);
	return 0;
}

