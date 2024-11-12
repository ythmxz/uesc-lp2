#include <stdio.h>

typedef struct {

	char nome[51];
	int id;
	double carteira;

} registro;

void abrirArquivo();
void criarRegistro();
void expandirRegistro();
void reduzirRegistro();
void mostrarRegistro();

int main() {



	return 0;

}

void abrirArquivo() {

	FILE *p_arquivo;

	p_arquivo = fopen("registro.txt", "r+");

	if ( p_arquivo == NULL )
		p_arquivo = fopen("registro.txt", "w+");

}

void criarRegistro() {}

void expandirRegistro() {}

void reduzirRegistro() {}

void mostrarRegistro() {}
