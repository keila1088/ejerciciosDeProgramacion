/*
 * swap.c
 *
 *  Created on: 4 abr. 2022
 *      Author: MMGyD
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion que devuelva el doble de un numero dado

void swap (int*, int*);

int main(){
	setbuf(stdout, NULL);
	int x=10,
		y=20;
	printf("numeros antes de la funcion: x: %d // y: %d \n", x, y);
	swap(&x, &y);
	printf("numeros despues de la funcion: x: %d // y: %d \n", x, y);

	return 0;
}

void swap (int* num1, int*num2){
	int aux=*num1;
	*num1=*num2;
	*num2=aux;
}
