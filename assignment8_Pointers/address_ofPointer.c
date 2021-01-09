#include<stdio.h>
int main()
{
	char ch;
	ch='a';
	char *ptr;    //declaring pointer *ptr                                  
	ptr=&ch;         //assigning value to pointer
	printf("\n1 address of ch:%p",&ch);  // 
	printf("\n2 value of ch:%c",ch);      
	printf("\n3 address of ptr:%p",&ptr);
	printf("\n4 value of *ptr:%c",*ptr);    // print ptr= (value of ch) 
	printf("\n5 ");

}
