/*
Yuri Thomaz dos Santos Carvalho
Aula 03 - Recursividade
*/

#include <stdio.h>

int fib(int valor);

int main() {

	int valor;

	printf("\nInsira um valor: ");
	scanf("%d", &valor);

	printf("\nFib(%d) = %d\n", valor, fib(valor));

	return 0;

}

int fib(int valor) {

	if ( valor == 0 )
		return 0;

	if ( valor == 1 )
		return 1;

	else
		return (fib(valor - 1) + fib(valor - 2));

}
