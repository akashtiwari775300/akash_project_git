#include<stdio.h>
int main()
{
	long a;
	long long b;
	long double c;
	int d,e,f;
	d=sizeof(a);
	e=sizeof(b);
	f=sizeof(c);
	printf("%ld\n%ld\n%ld\n",d,e,f);
	return 0;
}
