#include<stdio.h>
int main()
{
	int sec, h, m, s;
	printf("Enter the number in second");
	scanf("%d",&sec);
	printf("\n%d\n",sec);
	h=(sec/3600);
	m=(sec-(3600*h))/60;
	s=(sec-(3600*h))-(m*60);
	printf("\nH:M:S:%d:%d:%d:",h,m,s);
			return 0;
			


		



}
