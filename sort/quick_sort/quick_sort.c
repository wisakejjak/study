#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <climits>

void swap(int *firstNumber, int *secondNumber){
    int tmp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = tmp;
}

void quick_sort(int* pArray, int left, int right){
    if (left < right){
        int pivotIndex = floor((left+right)/2);
        int pivot = pArray[pivotIndex];
        swap(&pArray[pivotIndex], &pArray[right]);
        int i = left;
        for (int j = left; j < right; j++){
            if(pArray[j] < pivot){
                swap(&pArray[i], &pArray[j]);
                i++;
            }
        }
        swap(&pArray[i], &pArray[right]);
        quick_sort(pArray, left, i-1);
        quick_sort(pArray, i+1, right);
    }
}


int main (void){
    printf("Size of array from 1 to %i:\n", INT_MAX);
    int arraySize;
    scanf("%d", &arraySize);
    int* pArray = (int*)malloc(arraySize*sizeof(int));
    for(int i = 0; i < arraySize; i++){
        pArray[i] = rand() % INT_MAX-1;
    }
    
    for(int i = 0; i < arraySize; i++){
        printf("%i ",pArray[i]);
        if (i % 10 == 0) printf("\n");
    }
    
    quick_sort(pArray, 0, arraySize-1);
    
    for(int i = 0; i < arraySize; i++){
        printf("%i ",pArray[i]);
        if (i % 10 == 0) printf("\n");
    }
    
    free(pArray);
    return 0;
}
