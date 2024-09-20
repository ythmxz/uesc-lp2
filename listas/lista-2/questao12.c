/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 12
*/

/*
Implemente uma função que inverta uma string dada usando ponteiros.

Use dois ponteiros — um no início e um no final — para trocar os caracteres até que eles se
encontrem no meio.
*/

#include <stdio.h>

void inverter(char *ptexto);

int main() {

	int tamanhoTexto = 51;
	char texto[tamanhoTexto];

	printf("\nEscreva uma frase (50 caracteres):\n\n");
	scanf("%50[^\n]%*c", texto);

	printf("\nAqui está a frase:\n");
	printf("\n%s\n", texto);

	inverter(texto);

	printf("\nAqui está a frase invertida:\n");
	printf("\n%s\n", texto);

	return 0;

}

void inverter(char *ptexto) {

	int i, temp;
	int tamanhoTexto;

	i = 0;


	while ( *(ptexto + i) != '\0' ) {

		tamanhoTexto++;
		i++;

	}

	i = 0;

	while ( i <= ((tamanhoTexto / 2) - i) ) {

		temp = *(ptexto + i);
		*(ptexto + i) = *(ptexto + ((tamanhoTexto / 2) - i - 1));
		*(ptexto + ((tamanhoTexto / 2) - i - 1)) = temp;

		i++;

	}

	i = tamanhoTexto;

	while ( i > (tamanhoTexto / 2) ) {

		temp = *(ptexto + i);
		*(ptexto + i) = *(ptexto + ((tamanhoTexto / 2) - i - 1));
		*(ptexto + ((tamanhoTexto / 2) - i - 1)) = temp;

		i--;

	}

}
