#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void merge(int* pArray, int* pLeftArray, int* pRightArray, int middle, int right){ // merging arrays
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

void merge_sort(int* pArray, int sizeArray){ // merge sorting
    if(sizeArray < 2){ // size of array check
        return;
    }
    int middle = sizeArray/2;
    int* pLeftArray = (int*)malloc(middle*sizeof(int)); // allocate memory for left array
    int* pRightArray = (int*)malloc((sizeArray - middle)*sizeof(int)); // allocate memory
																	   // for right array
    for (int i = 0; i < middle; i++) { // copy left part of array to left array
        pLeftArray[i] = pArray[i];
    }
    for (int i = middle; i < sizeArray; i++) { // copy rith part of array to right array
        pRightArray[i - middle] = pArray[i];
    }
    merge_sort(pLeftArray, middle); // merge sorting for left array
    merge_sort(pRightArray, sizeArray - middle); // merge sorting for right array
    merge(pArray, pLeftArray, pRightArray, middle, sizeArray-middle); // merging back to
																	  // arrays (left and
																	  // right) as a left
																	  // and right parts
																	  // of array
    free(pLeftArray); // free the memory 
    free(pRightArray); // free the memory
}

int main(){
    int arraySize;
    scanf("%d", &arraySize); // size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); // allocate the memory
    for(int i = 0; i < arraySize; i++){ // array filling (random number from 0 to 50) 
        pArray[i] = rand() % 50;
    }
    merge_sort(pArray, arraySize); // merge sorting
    free(pArray); // free the memory
    return 0;
}
