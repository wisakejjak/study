#include <iostream>
#include <cmath>
#include <climits>

void swap(int *firstNumber, int *secondNumber){ //swap function
    int tmp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = tmp;
}

void quick_sort(int* pArray, int left, int right){ //quick_sort function
    if (left < right){
        int pivotIndex = floor((left+right)/2); //set index of pivot array
        int pivot = pArray[pivotIndex]; //set element of array by index
        swap(&pArray[pivotIndex], &pArray[right]); //swap pointers (pivot and right)
        int i = left;
        for (int j = left; j < right; j++){
            if(pArray[j] < pivot){
                swap(&pArray[i], &pArray[j]);
                i++;
            }
        }
        swap(&pArray[i], &pArray[right]);
        quick_sort(pArray, left, i-1); //quick sort left part of array
        quick_sort(pArray, i+1, right); //quick sort right part of array
    }
}


int main (){
    std::cout << "Size of array from 1 to "<< INT_MAX << " : ";
    int arraySize;
    std::cin >> arraySize; //size of array
    int* pArray = new int [arraySize]; //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to INT_MAX-1)
        pArray[i] = rand() % INT_MAX-1;
    }
    for(int i = 0; i < arraySize; i++){
        std::cout << pArray[i] << " ";
    }
    quick_sort(pArray, 0, arraySize-1); //quick sort
    for(int i = 0; i < arraySize; i++){
        std::cout  << pArray[i] << " ";
    } 
    delete[] pArray; //free the memory
    return 0;
}
