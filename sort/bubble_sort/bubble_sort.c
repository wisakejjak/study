#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

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

int bubble_sort(int* pArray, int sizeOfArray){
	for(int i = 0; i < sizeOfArray - 1; i++){
		for(int j = 0; j < sizeOfArray - i - 1; j++){
			if(pArray[j] > pArray[j+1]){
				//Swapping without tmp variable
				pArray[j] = pArray[j] + pArray[j+1];
				pArray[j+1] = pArray[j] - pArray[j+1];
				pArray[j] = pArray[j] - pArray[j+1];
				printf("\n\t\t\tBubble sort iterations:\n");
				printArray(pArray, sizeOfArray);
			}
		}
	}
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
	printf("\n\t\t\tRaw Array:\n");//print raw array
	printArray(pArray,arraySize);
	//printf("\n\t\t\tBubble sort iterations:\n");//print bubble sort iterations
    bubble_sort(pArray, arraySize);//bubble sort
    printf("\n\t\t\tSorted Array:\n");//print sorted array
    printArray(pArray,arraySize);
    free(pArray);//free the memory	
	return 0;
}
