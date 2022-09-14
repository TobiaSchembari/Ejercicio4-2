/*
 ============================================================================
 Name        : Ejercicio4-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int suma(int num1,int num2,int* resultado);

int main(void) {
	setbuf(stdout,NULL);
//	Ejercicio 4-2: Realizar una función Suma que reciba como parámetros dos enteros (los que
//	va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 1 si
//	pudo realizar la suma y cero en caso de no haberla podido realizar.

	  int resultado;

	  suma(3,2,&resultado);
	    printf("El resultado de la suma es %d" ,resultado);


	return EXIT_SUCCESS;
}
int suma(int num1,int num2,int* resultado){

	int retorno;
	int buffer;
	if(resultado != NULL){
		buffer = num1 + num2;
		*resultado = buffer;
		retorno = 1;
	}else
		retorno = 0;


	return retorno;
};
