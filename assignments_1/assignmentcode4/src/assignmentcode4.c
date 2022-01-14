/*
 ============================================================================
 Name        : assignmentcode4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a=0, b=0, mult=0;
	printf("Enter two numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a , &b);
	mult=a*b;
	printf("sum: %f",mult);
}
