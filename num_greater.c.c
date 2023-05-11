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

int main(){
	int num1,num2;
	printf("ENTER NUMBER:\n");
	scanf("%d %d", &num1,&num2);

	if( num1 % num2){
		printf("%d number is equal", num1);

	}else
	{
		printf("%d numbes is unequal", num2);
	}
	return 0;
}

