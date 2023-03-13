#include <stdio.h>
#include <limits.h>
#include "minMax3.h"
#include "numOps.h"

void arrayminMax3(int arrayOriginal[], int n){
    numOperations = 0;

    if((n % 2) != 0){
        arrayOriginal[(n + 1)] = arrayOriginal[n];
        n = n + 1;
    }

    int currentMax = arrayOriginal[0];
    int currentMin = arrayOriginal[1];

    if(arrayOriginal[0] < arrayOriginal[1]){
        currentMax = arrayOriginal[1];
        currentMin = arrayOriginal[0];
    }

    for(int i = 2; i < (n - 1); i += 2){
        numOperations++;
        if(arrayOriginal[i] > arrayOriginal[(i + 1)]){
            numOperations++;
            if(arrayOriginal[i] > currentMax){
                numOperations++;
                currentMax = arrayOriginal[i];
            }
            if(arrayOriginal[(i + 1)] < currentMin){
                numOperations++;
                currentMin = arrayOriginal[(i + 1)];
            }
        }
        else{
            numOperations++;
            if(arrayOriginal[i] < currentMin){
                numOperations++;
                currentMin = arrayOriginal[i];
            }
            if(arrayOriginal[(i + 1)] > currentMax){
                numOperations++;
                currentMax = arrayOriginal[(i + 1)];
            }
        }
    }

    printf("\n\nOtimização - minMax 3");
    printf("\nO maior elemento do array é %d\n", currentMax);
    printf("O menor elemento do array é %d", currentMin);
    showOperations(numOperations);
}