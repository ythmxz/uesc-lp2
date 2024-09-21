/*
Yuri Thomaz dos Santos Carvalho
Lista II - Questão 01
*/

/*
Calcule a área de um círculo usando ponteiros.

Escreva um programa que pegue o raio de um círculo como entrada, calcule a
área usando uma função e retorne o resultado usando um ponteiro.
*/

#include <stdio.h>
#include <math.h>

void calculoArea(double *praio, double *parea);

int main() {

	double raio, area;

	double *praio = &raio;
	double *parea = &area;

	printf("\nInsira o raio da circunferência: ");
	scanf("%lf", praio);

	calculoArea(praio, parea);

	printf("\nA área de uma circunferência de raio %g é %g.\n", raio, area);

	return 0;

}

void calculoArea(double *praio, double *parea) {

	*parea = 3.14 * pow(*praio, 2);

}
