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

double calculoArea(double largura, double altura);

int main() {

	double area;

	struct medidas {

		double largura;
		double altura;

	};

	struct medidas retangulo;

	printf("\nInsira a largura: ");
	scanf("%lf", &retangulo.largura);

	printf("\nInsira a altura: ");
	scanf("%lf", &retangulo.altura);

	area = calculoArea(retangulo.largura, retangulo.altura);

	printf("\nA area de um retângulo %gx%g é %g!\n"
			, retangulo.largura, retangulo.altura, area);

	return 0;

}

double calculoArea(double largura, double altura) {

	double area;

	area = (largura * altura);

	return area;

}
