#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void swap(int *firstNumber, int *secondNumber){ // swapping function
    int tmp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = tmp;
}

void quick_sort(int* pArray, int left, int right){ // quick sorting
    if (left < right){ 
        int pivotIndex = floor((left+right)/2); // set index of pivot array
        int pivot = pArray[pivotIndex]; // set element of array by index
        swap(&pArray[pivotIndex], &pArray[right]); // swap pointers (pivot and right)
        int i = left;
        for (int j = left; j < right; j++){
            if(pArray[j] < pivot){
                swap(&pArray[i], &pArray[j]);
                i++;
            }
        }
        swap(&pArray[i], &pArray[right]);
        quick_sort(pArray, left, i-1);  // quick sort left part of array
        quick_sort(pArray, i+1, right); // quick sort right part of array
    }
}

int main (void){
    int arraySize;
    scanf("%d", &arraySize); // size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); // allocate the memory
    for(int i = 0; i < arraySize; i++){ // array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    quick_sort(pArray, 0, arraySize-1); // quick sorting
    free(pArray); // free the memory
    return 0;
}
