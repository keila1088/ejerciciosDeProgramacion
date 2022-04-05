/*
 * ej1.c
 *
 *  Created on: 4 abr. 2022
 *      Author: MMGyD
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion que recibe tres enteros y devuelve el mayor de todos

int obtenerMayor(int, int, int);
float calcularSuperficie(float);
int calcularsuperficieref(float, float*);

int main(){
	setbuf(stdout, NULL);
	int done;
	float superficie,
		radio;
	printf("ingrese el radio de la circunferencia: \n");
	scanf("%f", &radio);
	done= calcularsuperficieref(radio, &superficie);
	if(done==1){
		printf("la superficie del circulo es: %.2f", superficie);
	}else{
		printf("no se pudo calcular");
	}

	return 0;
}

int obtenerMayor(int n1, int n2, int n3){
	int mayor;

	if(n1>n2 && n1>n3){
		mayor=n1;
	}else if(n2>=n1 && n2>n3){
		mayor=n2;
	}else{
		mayor=n3;
	}

	return mayor;
}

float calcularSuperficie(float radio){
	float sup;
	if(radio>=0){
		sup=3.14*radio*radio;
	}else{
		printf("NO SE PUEDE CALCULAR");
	}
	return sup;
}

int calcularsuperficieref(float radio, float* superficie){
	int done;
	if(radio>=0){
		*superficie=3.14*radio*radio;
		done=1;
	}else{
		done=0;
	}

	return done;
}
