/*
 ============================================================================
 Name        : area.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char choice;
	float radius , area , circumference;
	printf("Enter the values of radius of circle :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	printf("for calculating area press a for calculating circumference press c :");
		fflush(stdin); fflush(stdout);
		scanf("%c",&choice);
		switch(choice)
		{
		case 'a':
		case 'A':
		{
		area=3.14*radius*radius;
		printf("\n area = %f",area);
		}
		break;
		case 'c':
		case 'C':
		{
		circumference=2*3.14*radius;
		printf("\n circumference = %f",circumference);
		}
		break;
		default:
		{
		printf("error");
		}
		}
	return 0;
}

