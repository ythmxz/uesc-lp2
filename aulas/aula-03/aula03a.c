/*
Yuri Thomaz dos Santos Carvalho
Aula 03 - Recursividade
*/

#include <stdio.h>

unsigned long long int fat(int valor);

int main() {

	int valor;

	printf("\nInsira um valor: ");
	scanf("%d", &valor);

	printf("\n%d! = %lld\n", valor, fat(valor));

	return 0;

}

unsigned long long int fat(int valor) {

	if ( valor == 0 )
		return 1;

	else
		return (valor * fat(valor - 1));

}
