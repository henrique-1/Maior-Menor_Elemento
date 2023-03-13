#include <limits.h>
#include <stdio.h>
#include "minMax1.h"
#include "numOps.h"

void arrayminMax1(int arrayOriginal[], int n){
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

    printf("O maior elemento do array é %d\n", currentMax);
    printf("O menor elemento do array é %d\n", currentMin);
    showOperations(numOperations);
}