#include <iostream>
#include <climits>

void printArray(int* pArray, int sizeArray){
    for(int i = 0; i < sizeArray; i++){
        std::cout << "[" << i << "]:[";
        for (int j = 0; j < pArray[i]; j++)
            std::cout << "*";
        std::cout << "]" << std::endl;
    }
    std::cout << std::endl << std::endl;
}

void merge(int* pArray, int* pLeftArray, int* pRightArray, int middle, int right){
    int i = 0, j = 0, k = 0;
    while (i < middle && j < right){
        if (pLeftArray[i] <= pRightArray[j]){
            pArray[k++] = pLeftArray[i++];
        }
        else{
            pArray[k++] = pRightArray[j++];
        }
    }
    while (i < middle){
        pArray[k++] = pLeftArray[i++];
    }
    while (j < right){
        pArray[k++] = pRightArray[j++];
    }
}

void merge_sort(int* pArray, int sizeArray){
    if(sizeArray < 2){
        return;
    }
    int middle = sizeArray/2;
    int* pLeftArray = new int[middle];
    int* pRightArray = new int[sizeArray - middle];
    for (int i = 0; i < middle; i++) {
        pLeftArray[i] = pArray[i];
    }
    for (int i = middle; i < sizeArray; i++) {
        pRightArray[i - middle] = pArray[i];
    }
    merge_sort(pLeftArray, middle);
    merge_sort(pRightArray, sizeArray - middle);
    merge(pArray, pLeftArray, pRightArray, middle, sizeArray-middle);
    std::cout << std::endl << "\t\t\tMerge sort iterations:" << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << "[" << i << "]:[";
        if ((pArray[i] > 50)||(pArray[i] < 0)) {
            std::cout << " ]" << std::endl;
            continue;
        }
        for (int j = 0; j < pArray[i]; j++)
            std::cout << "*";
        std::cout << "]" << std::endl;
    }
    std::cout << std::endl << std::endl;
    delete[] pLeftArray;
    delete[] pRightArray;
}

int main(){
    std::cout << "Size of array from 1 to " << INT_MAX <<":" << std::endl;
    int arraySize;
    std::cin >> arraySize;
    int* pArray = new int[arraySize];
    for(int i = 0; i < arraySize; i++){
        pArray[i] = rand() % 50;
    }
    std::cout << std::endl << "\t\t\tRaw Array:" << std::endl;
    printArray(pArray, arraySize);
    merge_sort(pArray, arraySize);
    std::cout << std::endl << "\t\t\tSorted Array:" << std::endl;
    printArray(pArray, arraySize);
    delete[] pArray;
    return 0;
}
