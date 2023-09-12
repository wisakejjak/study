#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int cycle_sort(int* pArray, int arraySize){ // cycle sorting
	return 0;
}

int main(){
    int arraySize;
    scanf("%d", &arraySize); // size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); // allocate the memory
    for(int i = 0; i < arraySize; i++){ // array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    cycle_sort(pArray, arraySize); // cycle sorting
	free(pArray); // free the memory
	return 0;
}


