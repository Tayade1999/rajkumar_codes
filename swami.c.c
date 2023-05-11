/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	puts("Enter two number: ");
	scanf("%d", &num);

	if( num%2 == 0){
		printf("%d number is even", num);
	} else
	{
		printf("%d number is odd", num);
	}


	return 0;
}
