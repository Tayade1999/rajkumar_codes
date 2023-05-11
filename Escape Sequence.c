/*
 ============================================================================
 Name        : Escape.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {

	// Escape Sequences or Escape Characters

	// New Line: \n
    puts("This is first statement.\nThis is second statement.");

    // Horizontal Tab: \t
    puts("Before tab.\tAfter tab.");

    // Single Quote: \'
    char x = '\'';
    printf("%c\n", x);

    // Double Quote: \"
    puts("\"This statement is within double quotes.\"");

	return 0;
}
