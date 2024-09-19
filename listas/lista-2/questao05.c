/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 05
*/

/*
Programa de Conversão de Temperatura.

Escreva um programa que converta temperaturas entre Celsius e Fahrenheit usando funções. Passe o valor da temperatura por referência para modificar a variável original.
*/

#include <stdio.h>

void celsius(double *ptemperatura, double *presultado);
void fahrenheit(double *ptemperatura, double *presultado);

int main() {

	int opcao = 0;
	double temperatura = 0.00;
	double resultado = 0.00;
	double *ptemperatura = &temperatura;
	double *presultado = & resultado;

	printf("\nSelecione a conversão:\n");
	printf("\n1 - °C -> °F\n2 - °F -> °C\n");

REPETIR_OPCAO:

	printf("\nOpção: ");
	scanf("%d", &opcao);

	while (opcao < 1 || opcao > 2) {

		printf("\nOpção inválida! Tente novamente.\n");

		goto REPETIR_OPCAO;

	}

	printf("\nInsira a temperatura: ");
	scanf("%lf", &temperatura);

	switch (opcao) {

	case 1:

		fahrenheit(ptemperatura, presultado);

		printf("\n%g °C = %g °F\n",temperatura, resultado);

		break;

	case 2:

		celsius(ptemperatura, presultado);

		printf("\n%g °F = %g °C\n",temperatura, resultado);

		break;

	}

	return 0;

}

void celsius(double *ptemperatura, double *presultado) {

	*presultado = ((*ptemperatura - 32.00) * 5.00/9.00);

}

void fahrenheit(double *ptemperatura, double *presultado) {

	*presultado = ((*ptemperatura * 9.00/5.00) + 32.00);

}
