/*
 ============================================================================
 Name        : Projeto_helloworld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main (void) {

	int idade = 18;
	const int MAX_NUM = 100;

	printf("variável int comum = %d/n", idade);
	printf("variável int constante = %d/n", MAX_NUM);
	printf("variavel constante = %f/n", PI);

	//MAX_NUM = 99;

	return EXIT_SUCCESS;
}