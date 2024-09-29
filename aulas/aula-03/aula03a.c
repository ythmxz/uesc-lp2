/*
Yuri Thomaz dos Santos Carvalho
Aula 03 - Recursividade
*/

#include <stdio.h>

int fat(int valor);

int main() {

	int valor;

	printf("\nInsira um valor: ");
	scanf("%d", &valor);

	printf("\n%d! = %d\n", valor, fat(valor));

	return 0;

}

int fat(int valor) {

	if ( valor == 0 )
		return 1;

	else
		return (valor * fat(valor - 1));

}
