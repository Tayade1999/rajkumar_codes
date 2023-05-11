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


int main() {

    char name[40], gender;
    int age, id;

    puts("Enter name: ");
    scanf("%[^\n]%*c", name);
    printf("%s", name);

    puts("\nEnter id: ");
    scanf("%d", &id);
    printf("%d", id);

    // Clear input buffer as required.
    while ((getchar()) != '\n');

    puts("\nEnter gender: 'M' or 'F' ");
    scanf("%c", &gender);
    printf("%c", gender);

    puts("\nEnter age: ");
    scanf("%d", &age);
    printf("%d", age);

	return 0;
}
