#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int gnome_sort(int* pArray, int arraySize){
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
    gnome_sort(pArray, arraySize); //gnome sort
	free(pArray); //free the memory
	return 0;
}


