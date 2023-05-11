/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int main(){

char str[100];

scanf("%s",str);

int x=0,y=0;

int n=strlen(str);

for(int i=0;i<n;i++){

if(str[i]=='z'||str[i]=='Z'){

x++;

}

if(str[i]=='o'||str[i]=='O'){

y++;

}

}

int z=2*x;

if(y==z && n<21){

printf("Yes");

}

else{

printf("No");

}

}
