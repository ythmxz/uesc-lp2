#include <stdio.h>
#include <stdlib.h>

FILE *p_arquivo;

int flag = 0;

typedef struct {

	int id;
	char nome[51];
	double carteira;

} registro;


void salvarArquivo(registro *cliente, int *p_tamanho);
void carregarArquivo(registro *cliente, int *p_tamanho);

void criarRegistro(registro *cliente);
void expandirRegistro(registro **p_cliente, int *p_tamanho);
void reduzirRegistro(registro **p_cliente, int *p_tamanho, int remover);
void editarRegistro(registro *cliente, int *p_tamanho, int editar);
void exibirRegistro(registro *cliente, int *p_tamanho);


int main() {

	int tamanho = 1;
	int *p_tamanho = &tamanho;

	int menu = 1;
	int remover = 0, editar = 0;

	registro *cliente = (registro*)malloc(*p_tamanho * sizeof(registro));

	if ( cliente == NULL ) {

		printf("Erro de alocação! Encerrando programa.");
		return 1;

	}

	registro **p_cliente = &cliente;

	printf("REGISTRO DE CLIENTES");
	printf("\n-----------------------------------------------------------------\n");

	carregarArquivo(cliente, p_tamanho);

	if ( flag == 1 ) {

		criarRegistro(cliente);
		salvarArquivo(cliente, p_tamanho);

		flag = 0;

	}

	while ( menu != 0 ) {

		printf("\nO que você deseja fazer agora?\n");
		printf("\n0 - Sair\n1 - Adicionar cliente\n2 - Remover cliente"
				"\n3 - Editar cliente\n4 - Exibir clientes\n");
		printf("\nResposta: ");
		scanf("%d", &menu);

		printf("\n-----------------------------------------------------------------\n");

		switch ( menu ) {

			case 1:

				system("cls || clear");
				expandirRegistro(p_cliente,p_tamanho);
				salvarArquivo(cliente, p_tamanho);
				printf("\n-----------------------------------------------------------------\n");

				break;

			case 2:

				system("cls || clear");
				reduzirRegistro(p_cliente,p_tamanho, remover);
				salvarArquivo(cliente, p_tamanho);
				printf("\n-----------------------------------------------------------------\n");

				break;

			case 3:

				system("cls || clear");
				editarRegistro(cliente,p_tamanho, editar);
				salvarArquivo(cliente, p_tamanho);
				printf("\n-----------------------------------------------------------------\n");

				break;

			case 4:

				system("cls || clear");
				exibirRegistro(cliente,p_tamanho);
				printf("\n-----------------------------------------------------------------\n");

				break;

			default:

				break;

		}

	}

	free(cliente);

	return 0;

}

void salvarArquivo(registro *cliente, int *p_tamanho) {

	p_arquivo = fopen("clientes.bin", "wb");

	fwrite(p_tamanho, sizeof(int), 1, p_arquivo);
	fwrite(cliente, sizeof(registro),*p_tamanho, p_arquivo);

	fclose(p_arquivo);

}


void carregarArquivo(registro *cliente, int *p_tamanho) {

	p_arquivo = fopen("clientes.bin", "rb");

	if ( p_arquivo == NULL ) {

		p_arquivo = fopen("clientes.bin", "wb");

		flag = 1;

	}

	else {

		fread(p_tamanho, sizeof(int), 1, p_arquivo);
		fread(cliente, sizeof(registro), *p_tamanho, p_arquivo);

	}

	fclose(p_arquivo);

}


void criarRegistro(registro *cliente) {

	int i = 0;

	printf("\nCLIENTE %d\n", (i + 1));

	cliente[i].id = (i + 1);

	printf("\nNome: ");
	scanf("%50s", cliente[i].nome);

	printf("Carteira: R$");
	scanf("%lf", &cliente[i].carteira);

}


void expandirRegistro(registro **p_cliente, int *p_tamanho) {

	int tamanhoAtual = *p_tamanho;
	int tamanhoNovo = (tamanhoAtual + 1);

	*p_cliente = (registro*)realloc(*p_cliente, (tamanhoNovo * sizeof(registro)));

	if ( p_cliente == NULL ) {

		printf("Erro de realocação! Encerrando programa\033[0m");
		return;

	}

	printf("\nCLIENTE %d\n", (tamanhoAtual + 1));

	(*p_cliente)[tamanhoAtual].id = (tamanhoAtual + 1);

	printf("\nNome: ");
	scanf("%50s", (*p_cliente)[tamanhoAtual].nome);

	printf("Carteira: R$");
	scanf("%lf", &(*p_cliente)[tamanhoAtual].carteira);

	*p_tamanho += 1;

}


void reduzirRegistro(registro **p_cliente, int *p_tamanho, int remover) {

ENTRADA_REMOVER:

	printf("\nInsira o cliente que deseja remover: ");
	scanf("%d", &remover);

	while ( remover <= 0 || remover > *p_tamanho ) {

		printf("Valor inválido! Tente novamente.");
		goto ENTRADA_REMOVER;

	}

	int tamanhoAtual = *p_tamanho;
	int tamanhoNovo = (tamanhoAtual - 1);

	remover -= 1;

	printf("\nREMOVENDO CLIENTE %d\n", (remover + 1));

	printf("\nID: %02d", (*p_cliente)[remover].id);
	printf("\nNome: %s", (*p_cliente)[remover].nome);
	printf("\nCarteira: R$%.2lf\n", (*p_cliente)[remover].carteira);

	for( int i = remover; i < tamanhoNovo; i++ )
		(*p_cliente)[i] = (*p_cliente)[i + 1];

	*p_tamanho -= 1;

	*p_cliente = (registro*)realloc(*p_cliente, (tamanhoNovo * sizeof(registro)));

	if ( p_cliente == NULL ) {

		printf("Erro de realocação! Encerrando programa.");
		return;

	}

}


void editarRegistro(registro *cliente, int *p_tamanho, int editar) {

ENTRADA_EDITAR:

	printf("\nInsira o cliente que deseja editar: ");
	scanf("%d", &editar);

	while ( editar <= 0 || editar > *p_tamanho ) {

		printf("Valor inválido! Tente novamente.");
		goto ENTRADA_EDITAR;

	}

	editar -= 1;

	printf("\nEDITANDO CLIENTE %d\n", (editar + 1));

	printf("\nID: %02d", cliente[editar].id);
	printf("\nNome: %s", cliente[editar].nome);
	printf("\nCarteira: R$%.2lf\n", cliente[editar].carteira);

	printf("\nCLIENTE %d\n", (editar + 1));

	cliente[editar].id = (editar + 1);

	printf("\nNome: ");
	scanf("%50s", cliente[editar].nome);

	printf("Carteira: R$");
	scanf("%lf", &cliente[editar].carteira);

}


void exibirRegistro(registro *cliente, int *p_tamanho) {

	for ( int i = 0; i < *p_tamanho; i++ ) {

		printf("\nCLIENTE %d\n", (i + 1));

		printf("\nID: %02d", cliente[i].id);
		printf("\nNome: %s", cliente[i].nome);
		printf("\nCarteira: R$%.2lf\n", cliente[i].carteira);

	}

}
