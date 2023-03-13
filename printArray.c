#include <stdio.h>
#include "printArray.h"

// Função printArray(): imprime os n elementos de um array específico
void printArray(int array[], char msg[], int n){
    printf("\n\t%s =", msg);
    for(int i = 0; i < n; i++){
        printf(" %d", array[i]);
    }
    printf("\n");
}