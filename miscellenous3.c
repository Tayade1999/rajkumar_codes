/*
 ============================================================================
 Name        : miscellenous3.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {

	// Memory allocation.
	// Indices --> 		   0    1    2    3    4
	long scoresOne[5] = { 980, 903, 785, 761, 701 };

	// Print address of each element in the array.
	for (int i = 0; i < 5; i++) {
		printf("%1.ld\n", &scoresOne[i], &scoresOne[i]);
	}
	return 0;
}
