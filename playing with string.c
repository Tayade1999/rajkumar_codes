/*
 ============================================================================
 Name        : playing.c
 Author      : Rajkumar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */#include <stdio.h>

int main() {

    char name[10] = "India";
    char dollar = '$';
    float gdp = 2.2;
    int year = 2015;

    printf("As economic reforms picked up the pace, %s's GDP grew five-fold to reach US%c%.1f trillion in %d (as per IMF estimates).", name, dollar, gdp, year);

    return 0;
}
