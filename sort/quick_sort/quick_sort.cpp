#include <iostream>
#include <cmath>
#include <climits>

void swap(int *firstNumber, int *secondNumber){
    int tmp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = tmp;
}

void quick_sort(int* pArray, int left, int right){
    if (left < right){
        int pivotIndex = floor((left+right)/2);
        int pivot = pArray[pivotIndex];
        swap(&pArray[pivotIndex], &pArray[right]);
        int i = left;
        for (int j = left; j < right; j++){
            if(pArray[j] < pivot){
                swap(&pArray[i], &pArray[j]);
                i++;
            }
        }
        swap(&pArray[i], &pArray[right]);
        quick_sort(pArray, left, i-1);
        quick_sort(pArray, i+1, right);
    }
}


int main (){
    std::cout << "Size of array from 1 to "<< INT_MAX << " : ";
    int arraySize;
    std::cin >> arraySize;
    int* pArray = new int [arraySize];
    for(int i = 0; i < arraySize; i++){
        pArray[i] = rand() % INT_MAX-1;
    }

    std::cout << "\t\tRaw array" << std::endl; 
    for(int i = 0; i < arraySize; i++){
        std::cout << pArray[i] << " ";
    }
    
    quick_sort(pArray, 0, arraySize-1);
    
    std::cout << "\n\t\tSorted array" << std::endl;
    for(int i = 0; i < arraySize; i++){
        std::cout  << pArray[i] << " ";
    } 
    
    delete[] pArray;
    return 0;
}
