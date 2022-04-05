/*
 * punterosEj.c
 *
 *  Created on: 4 abr. 2022
 *      Author: MMGyD
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion que devuelva el doble de un numero dado

void duplicar (int*);

int main(){
	setbuf(stdout, NULL);
	int numero=20;
	printf("numero antes del llamado a la funcion: %d \n", numero);
	duplicar(&numero);
	printf("numero despues del llamado a la funcion: %d", numero);

	return 0;
}

void duplicar (int* num){
	*num=*num*2;
}
