/*
 ============================================================================
 Name        : Miscellaneous.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void display();

int x = 20;		// Global variable


int main() {

	/* Local Variable vs. Global Variable */

	int x = 10;		// Local variable
	printf("main(): %d\n", x);		// This 'x' is a local variable

	display();

	return 0;
}

void display() {

	printf("display(): %d\n", x);
}
