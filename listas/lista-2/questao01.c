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

// Declara a função.
void calculoArea(double *praio, double *parea);

int main() {

// Inicializa as variáveis de raio e área.
	double raio, area;

// Inicializa os ponteiros para as variáveis de raio e área.
	double *praio = &raio;
	double *parea = &area;

// Recebe o valor do raio.
	printf("\nInsira o raio da circunferência: ");
	scanf("%lf", praio);

// Chama a função.
	calculoArea(praio, parea);

// Apresenta a área calculada pela função.
	printf("\nA área de uma circunferência de raio %g é %g.\n", raio, area);

	return 0;

}

// Define a função.

/*
A função recebe os ponteiros da área e do raio e realizao cálculo da
área, atribuindo-o ao conteúdo apontado pelo ponteiro da área.
*/
void calculoArea(double *praio, double *parea) {

	*parea = 3.14 * pow(*praio, 2);

}
