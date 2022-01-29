/*
 ============================================================================
 Name        : summation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, sum;
	for(i=0;i<=99;i++)
	{
		sum += i;
	}
	printf("sum = %d", sum);
	return 0;
}
