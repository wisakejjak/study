#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int intro_sort(int* pArray, int arraySize){ // intro sorting
	return 0;
}

int main(){
    int arraySize;
    scanf("%d", &arraySize); // size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); // allocate the memory
    for(int i = 0; i < arraySize; i++){ // array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    intro_sort(pArray, arraySize); // intro sorting
	free(pArray); // free the memory
	return 0;
}


