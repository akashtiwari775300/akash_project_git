#include<stdio.h>
int main()
{
	int cm1, me,cm2,cm, cm3;
	int feet,inch;
	printf("enter the value feet,inch\n");
	scanf("%d%d",&feet,&inch);
	cm1=feet*30.48;
	cm2=inch*2.54;
	cm3=cm1+cm2;
	me=cm3/100;
	cm=cm3-(me*100);

	printf("%d\n",me);
	printf("%d\n",cm);
	return 0;




}
