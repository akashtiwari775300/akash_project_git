
#include<stdio.h>
void swap(int,int);
void swapp(int*,int*);

int main()
{
	int val1,val2;

	printf("Enter the number of val1 :");
	scanf("%d",&val1);
	printf("Enter the number of val2 :");
	scanf("%d",&val2);
	printf("Val1=%d,Val2=%d\n",val1,val2);
	swap(val1,val2);
	printf("After Swap\n Val1=%d,Val2=%d\n",val1,val2);
        swapp(&val1,&val2);
	printf("After Swappp\n Val1=%d,Val2=%d\n",val1,val2);


}
void swap(int val11,int val22)
{
	int z;
	z=val11;
	val11=val22;
	val22=z;
	printf("In Swap\n Val11=%d,Val12=%d\n",val11,val22);
}

void swapp(int *p1, int *p2)
{
	int  z;
	z =*p1;
	*p1=*p2;
	*p2=z;
}
