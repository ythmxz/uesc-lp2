/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 03
*/

/*
Crie e acesse uma estrutura simples.

Defina uma estrutura representando um "Ponto" com duas coordenadas (x e y).
Escreva uma função para criar um Ponto e, em seguida, imprima seus valores usando ponteiros.
*/

#include <stdio.h>

void coordenada(int *px, int *py);

int main() {

	struct coordenadas {

		int x;
		int y;

	};

	struct coordenadas ponto;

	int *px = &ponto.x;
	int *py = &ponto.y;

	coordenada(px, py);

	return 0;

}

void coordenada(int *px, int *py) {

	printf("\nInsira o ponto X: ");
	scanf("%d", px);

	printf("\nInsira o ponto Y: ");
	scanf("%d", py);

	printf("\nCoordenadas: (%d, %d)\n", *px, *py);

}
