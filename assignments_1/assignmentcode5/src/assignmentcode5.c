/*
 ============================================================================
 Name        : assignmentcode5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	printf("Enter a character");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c = %d",a,a);
}
