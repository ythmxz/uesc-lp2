#include <stdio.h>

const int LIMITE_CLIENTES = 100;

typedef struct {

	char nome[51];
	int id;
	double carteira;

} registro;

void abrirArquivo();
void criarRegistro(registro *p_cliente, int tamanho);
void expandirRegistro();
void reduzirRegistro();
void mostrarRegistro(registro *p_cliente, int tamanho);

int main() {

	int tamanho;

ENTRADA_TAMANHO:

	printf("\nDigite o tamanho inicial do registro: ");
	scanf("%d", &tamanho);

	while ( tamanho <= 0  || tamanho > LIMITE_CLIENTES) {

		printf("\nTamanho inválido!\n");

		goto ENTRADA_TAMANHO;

	}

	registro cliente[tamanho];

	registro *p_cliente;

	p_cliente = cliente;

	criarRegistro(p_cliente, tamanho);

	mostrarRegistro(cliente, tamanho);

	return 0;

}

void abrirArquivo() {

	FILE *p_arquivo;

	p_arquivo = fopen("registro.txt", "r+");

	if ( p_arquivo == NULL )
		p_arquivo = fopen("registro.txt", "w+");

}

void criarRegistro(registro *p_cliente, int tamanho) {

	for ( int i = 0; i < tamanho; i++ ) {

		printf("\nCliente %d\n", (i + 1));

		printf("\nDigite o nome: ");
		scanf("%50s", p_cliente[i].nome);

		printf("Digite o ID: ");
		scanf("%d", &p_cliente[i].id);

		printf("Digite o saldo: ");
		scanf("%lf", &p_cliente[i].carteira);

	}

}

void expandirRegistro() {}

void reduzirRegistro() {}

void mostrarRegistro(registro *p_cliente, int tamanho) {

	printf("\nRegistro atual:\n");

	for ( int i = 0; i < tamanho; i++ ) {

		printf("\nCliente %d\n", (i + 1));

		printf("\nNome: %s\n", p_cliente[i].nome);
		printf("ID: %02d\n", p_cliente[i].id);
		printf("Carteira: %.2lf\n", p_cliente[i].carteira);

	}

}
