#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void printArray(int* pArray, int sizeArray){
    for(int i = 0; i < sizeArray; i++){
        printf("[%i]:[",i);
        for (int j = 0; j < pArray[i]; j++){
            printf("*");
        }
        printf("]\n");
    }
    printf("\n\n");
}

void merge(int* pArray, int* pLeftArray, int* pRightArray, int middle, int right){
    int i = 0, j = 0, k = 0;
    while (i < middle && j < right){
        if (pLeftArray[i] <= pRightArray[j]){
            pArray[k++] = pLeftArray[i++];
        }
        else{
            pArray[k++] = pRightArray[j++];
        }
    }
    while (i < middle){
        pArray[k++] = pLeftArray[i++];
    }

    while (j < right){
        pArray[k++] = pRightArray[j++];
    }
}

void merge_sort(int* pArray, int sizeArray){
    if(sizeArray < 2){
        return;
    }
    int middle = sizeArray/2;
    int* pLeftArray = (int*)malloc(middle*sizeof(int));
    int* pRightArray = (int*)malloc((sizeArray - middle)*sizeof(int));
    for (int i = 0; i < middle; i++) {
        pLeftArray[i] = pArray[i];
    }
    for (int i = middle; i < sizeArray; i++) {
        pRightArray[i - middle] = pArray[i];
    }
    merge_sort(pLeftArray, middle);
    merge_sort(pRightArray, sizeArray - middle);
    merge(pArray, pLeftArray, pRightArray, middle, sizeArray-middle);
    printf("\n\t\t\tMerge sort iterations:\n");
    for(int i = 0; i < 5; i++){
        printf("[%i]:[",i);
        if ((pArray[i] > 50)||(pArray[i] < 0)) {
            printf(" ]\n");
            continue;
        }
        for (int j = 0; j < pArray[i]; j++){
            printf("*");
        }
        printf("]\n");
    }
    printf("\n\n");
    free(pLeftArray);
    free(pRightArray);
}

int main(){
    printf("Size of array from 1 to %i:\n", INT_MAX);
    int arraySize;
    scanf("%d", &arraySize);
    int* pArray = (int*)malloc(arraySize*sizeof(int));
    for(int i = 0; i < arraySize; i++){
        pArray[i] = rand() % 50;
    }
    printf("\n\t\t\tRaw Array:\n");
    printArray(pArray, arraySize);
    merge_sort(pArray, arraySize);
    printf("\n\t\t\tSorted Array:\n");
    printArray(pArray, arraySize);
    free(pArray);
    return 0;
}
