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

int main (void)
{
	int marks =650;
	int *ptr =&marks;
	printf("\n%d", marks);
	// address of marks variable
	printf("\n%    d", ptr );
	// address of pointer
	printf("\n%d", *ptr);
	// value of variable using pointer
	return 0;
}
