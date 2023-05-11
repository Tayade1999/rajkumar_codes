/*
 ============================================================================
 Name        : recursion.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void greetUser(int);

int main() {

	// Note: Identify the terminating condition to terminate the recursion.

	greetUser(5);

	return 0;
}

void greetUser(int num) {

	if (num > 0) {
		puts("Welcome");
		greetUser(--num);
	}
}
