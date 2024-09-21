/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 04
*/

/*
Passe uma Struct para uma Função por Referência.

Crie uma struct Rectangle com largura e altura, então escreva uma função
que calcule a área. Passe o retângulo por referência.
*/

#include <stdio.h>

// Declara a função.
double calculoArea(double largura, double altura);

int main() {

// Inicializa a variável da área.
	double area;

// Cria um struct com as variáreis de largura e altura.
	struct medidas {

		double largura;
		double altura;

	};

// Cria a variável do struct para acessar suas variáveis.
	struct medidas retangulo;

// Recebe os valores de largura e altura, respectivamente.

	printf("\nInsira a largura: ");
	scanf("%lf", &retangulo.largura);

	printf("\nInsira a altura: ");
	scanf("%lf", &retangulo.altura);

// Atribui o retorno da função à variável de área.
	area = calculoArea(retangulo.largura, retangulo.altura);

// Apresenta o tamanho do retângulo e sua área.
	printf("\nA area de um retângulo %gx%g é %g!\n"
			, retangulo.largura, retangulo.altura, area);

	return 0;

}

// Define a função.

/*
A função recebe as variáveis de largura e a altura e retorna o valor
resultante do cálculo da área.
*/
double calculoArea(double largura, double altura) {

	return (largura * altura);

}
