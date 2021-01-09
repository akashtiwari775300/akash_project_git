#include<stdio.h>
int main()
{
	char fn[10],ln[10];
	long int num;
	printf("frist name\nlast name\nphone number\n");
	scanf("%s%s%ld",&fn,&ln,&num);
	printf("%s\n%s\n%ld",fn,ln,num);

	return 0;
}
