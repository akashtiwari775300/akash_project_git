#include<stdio.h>
int main()
{
        int not100,not50,not20,not10,not5,not2;
	int num,rem100,rem50,rem20,rem10,rem5,rem2;

	printf("Enter the number\n");
	scanf("%d",&num);
	printf("%d\n",num);
	not100=num/100;
	rem100=num%100;
	printf("note of 100:%d\n",not100);
	not50=rem100/50;
	rem50=rem100%50;
	printf("note of 50:%d\n",not50);
	not20=rem50/20;
	rem20=rem50%20;
	printf("note of 20:%d\n",not20);
	not10=rem20/10;
	rem10=rem20%10;
	printf("note of 10:%d\n",not10);
	not5=rem10/5;
	rem5=rem10%5;
	printf("note of 5:%d\n",not5);
	not2=rem5/2;
	rem2=rem5%2;
	printf("not of 2:%d\n",not2);

	return 0;
	
}

