/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 10
*/

/*
Escreva um programa que simule um sistema simples de gerenciamento de estoque usando uma
matriz de estruturas e ponteiros, com funções para adicionar, remover e atualizar itens.

Dica: use uma matriz de structs para armazenar itens de inventário e implementar
funções para manipular o inventário.
*/

#include <stdio.h>

	int tamanho = 100;

	struct estoque {

		char nome[31];
		int codigo;
		double preco;

	};

void adicionar(struct estoque *pitem, int quantidade, int novaQuantidade);
void remover(struct estoque *pitem, int quantidade, int novaQuantidade);
void atualizar(struct estoque *pitem, int quantidade, int novaQuantidade);

int main() {

	int i;
	int acao;
	int quantidade, novaQuantidade;
	int removido;

	struct estoque item[tamanho];

	printf("\nDigite a quantidade de itens que deseja adicionar: ");
	scanf("%d", &quantidade);

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nItem %d\n", (i + 1));

		printf("\nNome: ");
		scanf(" %30[^\n]%*c", item[i].nome);

		printf("Preço: R$");
		scanf("%lf", &item[i].preco);

		while ( item[i].preco < 0 ) {

			printf("\nPreço inválido!\n");
			printf("\nPreço: R$");
			scanf("%lf", &item[i].preco);

		}

		printf("\n");

	}

	printf("\nEste é o seu estoque:\n");

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nItem %d\n", (i + 1));

		printf("\nNome: %s", item[i].nome);
		printf("\nCódigo: %02d", (i + 1));
		printf("\nPreço: R$%.2lf", item[i].preco);

		printf("\n");

	}

MENU:

	printf("\nO que deseja fazer?\n");

	printf("\n0 - Sair \n1 - Adicionar Item"
			"\n2 - Remover Item \n3 - Atualizar Item\n");

	printf("\nAção: ");
	scanf("%d", &acao);

	switch ( acao ) {

		case 1:
			goto ACAO_ADICIONAR;

		case 2:
			goto ACAO_REMOVER;

		case 3:
			goto ACAO_ATUALIZAR;

		default:
			return 0;

	}

ACAO_ADICIONAR:

	printf("\nDigite a quantidade de itens que deseja adicionar: ");
	scanf("%d", &novaQuantidade);

	adicionar(item, quantidade, novaQuantidade);

	goto MENU;

ACAO_REMOVER:

	printf("\nDigite o item que deseja remover: ");
	scanf("%d", &removido);

	remover(item, quantidade, removido);

	goto MENU;

ACAO_ATUALIZAR:

	printf("\nDigite a quantidade de itens que deseja atualizar: ");
	scanf("%d", &novaQuantidade);

	atualizar(item, quantidade, novaQuantidade);

	goto MENU;

	return 0;

}

void adicionar(struct estoque *pitem, int quantidade, int novaQuantidade) {

	int i;

	if ( novaQuantidade <= 0 || novaQuantidade > (tamanho - quantidade) ) {

        printf("\nNão é possível adicionar essa quantidade!\n");

        return;

    }

	for ( i = quantidade; i < (quantidade + novaQuantidade); i++ ) {

		printf("\nItem %d\n", (i + 1));

		printf("\nNome: ");
		scanf(" %30[^\n]%*c", pitem[i].nome);

		printf("Preço: R$");
		scanf("%lf", &pitem[i].preco);

		while ( pitem[i].preco < 0 ) {

			printf("\nPreço inválido!\n");
			printf("\nPreço: R$");
			scanf("%lf", &pitem[i].preco);

		}

		printf("\n");

	}

	quantidade += novaQuantidade;

	printf("\nEste é o seu estoque:\n");

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nItem %d\n", (i + 1));

		printf("\nNome: %s", pitem[i].nome);
		printf("\nCódigo: %02d", (i + 1));
		printf("\nPreço: R$%.2lf", pitem[i].preco);

		printf("\n");

	}

}

void remover(struct estoque *pitem, int quantidade, int removido) {

	int i;
	int temp;

	for ( i = 0; i < quantidade; i++ ) {



	}

	printf("\nEste é o seu estoque:\n");

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nItem %d\n", (i + 1));

		printf("\nNome: %s", pitem[i].nome);
		printf("\nCódigo: %02d", (i + 1));
		printf("\nPreço: R$%.2lf", pitem[i].preco);

		printf("\n");

	}

}

void atualizar(struct estoque *pitem, int quantidade, int novaQuantidade) {



}
