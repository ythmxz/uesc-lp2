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

// Declara a função.
void inverte(char *pinicio, char *pfinal, int tamanhoString);

int main() {

// Inicializa as variáveis da string e seu tamanho.
	char string[51];
	int tamanhoString = 0;

// Recebe o conteúdo da string.
	printf("\nDigite um texto (50 caracteres):\n\n");
	scanf("%50[^\n]%*c", string);

// Inicializa e atribui os ponteiros de início e final da string.
	char *pinicio = string;
	char *pfinal = string;

// Usa um laço que leva o ponteiro final ao fim da string.
	while ( *pfinal != '\0' ) {

		tamanhoString++;
		pfinal++;

	}

	pfinal--;

// Chama a função.
	inverte(pinicio, pfinal, tamanhoString);

//Apresenta a string invertida.
	printf("%s", string);

	return 0;

}

// Define a função.

/*
A função recebe os ponteiros de incício e final da string, além do tamanho da
string.

Então um laço é usado para percorrer a string até a metade e substitui
os caracteres iniciais pelos finais com a ajuda de uma variável temporária.
*/
void inverte(char *pinicio, char *pfinal, int tamanhoString) {

	char temp;
	int i;

	for ( i = 0; i < (tamanhoString / 2); i++ ) {

		temp = *pinicio;
		*pinicio = *pfinal;
		*pfinal = temp;

		pinicio++;
		pfinal--;

	}

}
