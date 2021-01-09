#include <stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet charactor\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
		{
		printf("This is alphabet\n");
	}
	else
	{
		printf("This is not alphabet\n");
	}
	return 0;
}
