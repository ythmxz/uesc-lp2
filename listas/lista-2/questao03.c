/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 03
*/

/*
Crie e acesse uma estrutura simples.

Defina uma estrutura representando um "Ponto" com duas coordenadas (x e y).
Escreva uma função para criar um Ponto e, em seguida, imprima seus
valores usando ponteiros.
*/

#include <stdio.h>

// Declara a função.
void coordenada(int *px, int *py);

int main() {

// Cria o struct com as variáveis das coordenadas x e y.
	struct coordenadas {

		int x;
		int y;

	};

// Cria a variável do struct, para acessar suas variáveis.
	struct coordenadas ponto;

//Inicializa e atribui os ponteiros das variáveis de coordenada.
	int *px = &ponto.x;
	int *py = &ponto.y;

// Cahama a função.
	coordenada(px, py);

	return 0;

}

// Define a função.

/*
A função recebe os ponteiros das variáveis x e y,
recebe o valor das variáveis pelo usuário e as apresenta no formato de
coordenada.
*/
void coordenada(int *px, int *py) {

	printf("\nInsira o ponto X: ");
	scanf("%d", px);

	printf("\nInsira o ponto Y: ");
	scanf("%d", py);

	printf("\nCoordenadas: (%d, %d)\n", *px, *py);

}
