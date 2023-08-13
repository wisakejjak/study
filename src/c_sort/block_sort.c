#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int block_sort(int* pArray, int start, int arraySize){
	return 0;
}

void printArray(int* pArray, int arraySize){

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
    printf("\n\t\t\tBlock sort iterations:\n");//print block sort iterations
    block_sort(pArray, 0, arraySize-1);//quick sort
    printf("\n\t\t\tSorted Array:\n");//print sorted array
    printArray(pArray,arraySize);

    free(pArray);//free the memory
    return 0;
}
