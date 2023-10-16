#include <cmath>
#include <climits>
#include <iostream>

// NEED TO CHECK THIS CODE (AFTER NCURSES)

void merge(int* pArray, int left, int middle, int right){
	int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int* LeftArray = new int[n1];
    int* RightArray = new int[n2];
    for (i = 0; i < n1; i++)
        LeftArray[i] = pArray[left + i];
    for (j = 0; j < n2; j++)
        RightArray[j] = pArray[middle + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (LeftArray[i] <= RightArray[j]) {
            pArray[k] = LeftArray[i];
            i++;
        } else {
            pArray[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        pArray[k] = LeftArray[i];
        i++;
        k++;
    }
    while (j < n2) {
        pArray[k] = RightArray[j];
        j++;
        k++;
    }
    delete[] LeftArray;
    delete[] RightArray;
}

int in_place_merge_sort(int* pArray, int left, int right){
	if (left < right) {
        int middle = left + (right - left) / 2;
        in_place_merge_sort(pArray, left, middle);
        in_place_merge_sort(pArray, middle + 1, right);
        merge(pArray, left, middle, right);
    }
	return 0;
}

int main (){
    int arraySize;
    std::cin >> arraySize; //size of array
    int* pArray = new int [arraySize]; //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to INT_MAX-1)
        pArray[i] = rand() % INT_MAX-1;
    }
    in_place_merge_sort(pArray, 0, arraySize-1); //in_place_merge sort
    delete[] pArray; //free the memory
    return 0;
}
