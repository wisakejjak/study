#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

// NEED TO CHECK THIS CODE (AFTER NCURSES)

void merge (int *pArray, int left, int middle, int right){
	int i, j, k;
	int n1 = middle - left + 1;
	int n2 = right - middle;
    // create temp arrays for the left and right subarrays
	int LeftArray[n1], RightArray[n2];
	// copy data to the temp arrays
	for (i = 0; i < n1; i++)
        LeftArray[i] = pArray[left + i];
    for (j = 0; j < n2; j++)
        RightArray[j] = pArray[middle + 1 + j];
	// merge the temp arrays back into pArray[left..right]
	i = 0; // initial index of the first subarray
    j = 0; // initial index of the second subarray
    k = left; // initial index of merged subarray
    while ((i < n1)&&(j < n2)){
        if (LeftArray[i] <= RightArray[j]){
            pArray[k] = LeftArray[i];
            i++;
        } else {
            pArray[k] = RightArray[j];
            j++;
        }
        k++;
    }
    // copy the remaining elements of LeftArray[], if there are any
    while (i < n1) {
        pArray[k] = LeftArray[i];
        i++;
        k++;
    }
    // copy the remaining elements of RightArray[], if there are any
    while (j < n2) {
        pArray[k] = RightArray[j];
        j++;
        k++;
    }
}

int in_place_merge_sort(int* pArray, int left, int right){ // in place merge sorting
	    if (left < right){ // find the middle point to divide the array into two halves
        int middle = left + (right - left) / 2;
        // recursively sort the first and second halves
        in_place_merge_sort(pArray, left, middle);
        in_place_merge_sort(pArray, middle + 1, right);
        merge(pArray, left, middle, right); // merge the sorted halves  
    }
	return 0;
}

int main(){
    int arraySize;
    scanf("%d", &arraySize); // size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); // allocate the memory
    for(int i = 0; i < arraySize; i++){ // array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
    in_place_merge_sort(pArray, 0, arraySize-1); // in place merge sorting
	free(pArray); // free the memory
	return 0;
}
