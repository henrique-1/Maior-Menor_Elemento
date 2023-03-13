#include <stdio.h>
#include <limits.h>
#include "minMax2.h"
#include "numOps.h"

void arrayminMax2(int arrayOriginal[], int n){
    int currentMax = INT_MIN;
    int currentMin = INT_MAX;
    numOperations = 0;

    for(int i = 1; i < n; i++){
        numOperations++;
        if(arrayOriginal[i] > currentMax){
            currentMax = arrayOriginal[i];
            numOperations++;
        }
        else if(arrayOriginal[i] < currentMin){
            currentMin = arrayOriginal[i];
            numOperations++;
        }
    }

    printf("\n\nOtimização - minMax 2");
    printf("\nO maior elemento do array é %d\n", currentMax);
    printf("O menor elemento do array é %d", currentMin);
    showOperations(numOperations);
}