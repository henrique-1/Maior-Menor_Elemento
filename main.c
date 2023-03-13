#include <stdio.h>
#include <stdlib.h>
#include "copyArray.h"
#include "createArray.h"
#include "minMax1.h"

int main() {
    printf("\tProjeto e Análise de Algoritmos\n");
    printf("\tListEx 02 | Maior e Menor Elemento de um Array\n");

    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));
    geraArrayAleatorio(arrayOriginal, n);



    array = (int*) malloc(n * sizeof(int));
    copyArray(arrayOriginal, array, n);

    arrayminMax1(arrayOriginal, n);

    return 0;
}
