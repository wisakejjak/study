#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int patience_sort(int* pArray, int arraySize){ // patience sorting
	return 0;
}

int main(){
    int arraySize;
    scanf("%d", &arraySize); // size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); // allocate the memory
    for(int i = 0; i < arraySize; i++){ // array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    patience_sort(pArray, arraySize); // patience sort
	free(pArray); // free the memory
	return 0;
}


