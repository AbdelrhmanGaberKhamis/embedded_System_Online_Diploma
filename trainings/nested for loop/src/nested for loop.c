/*
 ============================================================================
 Name        : nested.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	int k=0;
	for(i=9;i>0;i--)
	{
k++;
		for(j=0;j<i;j++)
		{
			printf("%d ",j+k);
		}
		printf("\n");
	}
}
