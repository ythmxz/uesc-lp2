/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 13
*/

/*
Defina uma struct para representar um livro com campos como título, autor e ano.
Crie uma matriz de structs de livros e imprima detalhes.

Dica: Crie uma matriz de structs, preencha os campos de cada struct e itere pela matriz para
imprimir os detalhes.
*/

#include <stdio.h>

int main() {

	int i;
	int quantidade;

	struct biblioteca {

		char titulo[31];
		char autor[31];
		int ano;

	};

	printf("\nDigite a quantidade de livros: ");
	scanf("%d", &quantidade);

	struct biblioteca livro[quantidade];

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nTítulo: ");
		scanf(" %30[^\n]%*c", livro[i].titulo);

		printf("Autor: ");
		scanf(" %30[^\n]%*c", livro[i].autor);

		printf("Ano: ");
		scanf("%d", &livro[i].ano);

	}

	printf("\nEstes são os livros:\n");

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nLivro %d\n", (i + 1));

		printf("\nTítulo: %s", livro[i].titulo);
		printf("\nAutor: %s", livro[i].autor);
		printf("\nAno: %d", livro[i].ano);

		printf("\n");

	}

	return 0;

}
