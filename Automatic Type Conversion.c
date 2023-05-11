/*
 ============================================================================
 Name        : Automatic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {

	// Implicit Type Conversion (Automatic Type Conversion)
	int radius = 300;
	double newRadius = radius;
	printf("%lf\n", newRadius);

	// Explicit Type Conversion
	double diameter = 4.67;
	int newDiameter = (int) diameter;
	printf("%d", newDiameter);

	return 0;
}
