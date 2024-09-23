/*
Yuri Thomaz dos Santos Carvalho
Lista I - Questão 15
*/

/*
Implemente um programa para somar dois polinômios usando structs para representar cada
polinômio e ponteiros para manipulação.

Dica: Defina uma struct para representar um termo polinomial com coeficiente e expoente.
Use arrays dessas structs para representar polinômios e implemente uma função
para somar dois polinômios.
*/

#include <stdio.h>

#define MAX_TERMOS 100 // Define o tamanho máximo de um polinômio

// Estrutura para representar um termo de um polinômio
struct Termo {
    int coeficiente;
    int expoente;
};

// Estrutura para representar um polinômio
struct Polinomio {
    struct Termo termos[MAX_TERMOS];
    int numTermos;
};

// Função para somar dois polinômios
void somarPolinomios(struct Polinomio *p1, struct Polinomio *p2, struct Polinomio *resultado) {
    int i = 0, j = 0, k = 0;

    while (i < p1->numTermos && j < p2->numTermos) {
        if (p1->termos[i].expoente > p2->termos[j].expoente) {
            resultado->termos[k++] = p1->termos[i++];
        } else if (p1->termos[i].expoente < p2->termos[j].expoente) {
            resultado->termos[k++] = p2->termos[j++];
        } else {
            resultado->termos[k].expoente = p1->termos[i].expoente;
            resultado->termos[k++].coeficiente = p1->termos[i++].coeficiente + p2->termos[j++].coeficiente;
        }
    }

    // Copiar os termos restantes (se houver)
    while (i < p1->numTermos) {
        resultado->termos[k++] = p1->termos[i++];
    }
    while (j < p2->numTermos) {
        resultado->termos[k++] = p2->termos[j++];
    }

    resultado->numTermos = k;
}

void imprimirPolinomio(struct Polinomio *p) {
    for (int i = 0; i < p->numTermos; i++) {
        printf("%dx^%d ", p->termos[i].coeficiente, p->termos[i].expoente);
    }
    printf("\n");
}

int main() {
    struct Polinomio polinomio1, polinomio2, resultado;
    int i;

    // Leitura do primeiro polinômio
    printf("Digite o número de termos do primeiro polinômio: ");
    scanf("%d", &polinomio1.numTermos);
    for (i = 0; i < polinomio1.numTermos; i++) {
        printf("Digite o coeficiente e expoente do termo %d: ", i + 1);
        scanf("%d %d", &polinomio1.termos[i].coeficiente, &polinomio1.termos[i].expoente);
    }

    // Leitura do segundo polinômio
    printf("Digite o número de termos do segundo polinômio: ");
    scanf("%d", &polinomio2.numTermos);
    for (i = 0; i < polinomio2.numTermos; i++) {
        printf("Digite o coeficiente e expoente do termo %d: ", i + 1);
        scanf("%d %d", &polinomio2.termos[i].coeficiente, &polinomio2.termos[i].expoente);
    }

    // Chamada da função para somar os polinômios
    somarPolinomios(&polinomio1, &polinomio2, &resultado);

    // Impressão do resultado
    printf("O polinômio resultante é: ");
    imprimirPolinomio(&resultado);

    return 0;
}
