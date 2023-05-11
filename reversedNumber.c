/*
 ============================================================================
 Name        : reversedNumber.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>


int main() {

    int num, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store user input in a variable so that the reversedNumber can
    // be compared to the original user input in the end.
    int originalNum = num;

    do {
        remainder = num % 10;
        reversedNumber = (reversedNumber * 10) + remainder;
        num = num / 10;
    } while (num > 0);

    if (originalNum == reversedNumber)
    {
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }
    return 0;
}
