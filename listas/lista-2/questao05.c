/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 05
*/

/*
Programa de Conversão de Temperatura.

Escreva um programa que converta temperaturas entre Celsius e Fahrenheit usando funções. Passe o valor da temperatura por referência para modificar a variável original.
*/

#include <stdio.h>

// Declara as funções.
void celsius(double *ptemperatura, double *presultado);
void fahrenheit(double *ptemperatura, double *presultado);

int main() {

// Inicializa e atribui as variáveis.
	int opcao = 0;
	double temperatura = 0.00;
	double resultado = 0.00;

// Inicializa e atribui os ponteiros.
	double *ptemperatura = &temperatura;
	double *presultado = & resultado;

/*
O tipo de conversão é recebido pelo scanf() e, caso o valor esteja fora das
opções possíveis, o código irá para o ponto REPETIR_OPCAO, até o usuário
entrar com um valor aceitável.
*/

	printf("\nSelecione a conversão:\n");
	printf("\n1 - °C -> °F\n2 - °F -> °C\n");

REPETIR_OPCAO:

	printf("\nOpção: ");
	scanf("%d", &opcao);

	while (opcao < 1 || opcao > 2) {

		printf("\nOpção inválida! Tente novamente.\n");

		goto REPETIR_OPCAO;

	}

// Recebe o valor da temperatura.
	printf("\nInsira a temperatura: ");
	scanf("%lf", ptemperatura);

/*
Dependendo da opção escolhida pelo usuário, será chamada a respectiva função
e apresentados os valores da temperatura e sua conversão.
*/
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

// Define as funções.

/*
As funções recebem os ponteiros da temperatura edo resultado e realizam
o cálculo da temperatura.
*/

void celsius(double *ptemperatura, double *presultado) {

	*presultado = ((*ptemperatura - 32.00) * 5.00/9.00);

}

void fahrenheit(double *ptemperatura, double *presultado) {

	*presultado = ((*ptemperatura * 9.00/5.00) + 32.00);

}
