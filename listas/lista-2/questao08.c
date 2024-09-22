/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 08
*/

/*
Escreva um programa que use uma matriz de structs para armazenar informações sobre alunos
(nome, ID, CR) e uma função que encontre o aluno com o maior CR usando ponteiros.

Dica: Use um ponteiro para acompanhar o aluno com o maior CR.
*/

#include <stdio.h>

int main() {

	int i;
	int quantidade;

	struct registro {

		char nome[31];
		int matricula;
		double nota;

	};

	printf("\nDigite a quantidade de alunos: ");
	scanf("%d", &quantidade);

	struct registro aluno[quantidade];

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nNome: ");
		scanf(" %30[^\n]%*c", aluno[i].nome);

		printf("Matrícula: ");
		scanf("%d", &aluno[i].matricula);

		printf("Nota: ");
		scanf("%lf", &aluno[i].nota);

	}

	printf("\nEste é o registro:\n");

	for ( i = 0; i < quantidade; i++ ) {

		printf("\nAluno %d\n", (i + 1));

		printf("\nNome: %s", aluno[i].nome);
		printf("\nMatrícula: %d", aluno[i].matricula);
		printf("\nNota: %g", aluno[i].nota);

		printf("\n");

	}

	return 0;

}
