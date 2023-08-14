#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int cocktail_shaker_sort(int* pArray, int arraySize){
	return 0;
}

int main(){
	printf("Size of array from 1 to %i:\n", INT_MAX);
    int arraySize;
    scanf("%d", &arraySize); //size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    cocktail_shaker_sort(pArray, arraySize); //cocktail_shaker sort
	free(pArray); //free the memory
	return 0;
}
