/*
 ============================================================================
 Name        : test_2d_array.c
 Author      : akash
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int d2_array[5][4];

int main(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	for(int i =0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			d2_array[i][j]=(i+1)*(j+1);
		}
	}
	for(int i =0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("[%d][%d]:%d\n",i,j,d2_array[i][j]);
		}
	}
	return EXIT_SUCCESS;
}
