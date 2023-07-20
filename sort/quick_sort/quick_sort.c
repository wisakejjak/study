#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <climits>

void swap(int *firstNumber, int *secondNumber){//swap function
    int tmp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = tmp;
}

void printArray(int* pArray, int arraySize){//print array function
    for(int i = 0; i < arraySize; i++){
        printf("[%i]:[",i);
        for (int j = 0; j < pArray[i]; j++){
            printf("*");
        }
        printf("]\n");
    }
    printf("------------------------------------------------------------\n");
}

void quick_sort(int* pArray, int left, int right){//quick_sort function
    if (left < right){ 
        printArray(pArray,right+1);//print arra
        int pivotIndex = floor((left+right)/2);//set index of pivot array
        int pivot = pArray[pivotIndex]; // set element of array by index
        swap(&pArray[pivotIndex], &pArray[right]);//swap pointers (pivot and right)
        int i = left;
        for (int j = left; j < right; j++){
            if(pArray[j] < pivot){
                swap(&pArray[i], &pArray[j]);
                i++;
            }
        }
        swap(&pArray[i], &pArray[right]);
        quick_sort(pArray, left, i-1); //quick sort left part of array
        quick_sort(pArray, i+1, right); //quick sort right part of array
    }
}


int main (void){
    printf("Size of array from 1 to %i:\n", INT_MAX);
    int arraySize;
    scanf("%d", &arraySize); //size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    
    printf("\n\t\t\tRaw Array:\n");//print raw array
    printArray(pArray,arraySize);
    printf("\n\t\t\tQuicksort iterations:\n");//print quicksort iterations
    quick_sort(pArray, 0, arraySize-1);//quick sort
    printf("\n\t\t\tSorted Array:\n");//print sorted array
    printArray(pArray,arraySize);

    free(pArray);//free the memory
    return 0;
}
