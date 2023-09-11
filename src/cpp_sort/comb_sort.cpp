#include <cmath>
#include <climits>
#include <iostream>

int comb_sort(int* pArray, int startArray, int arraySize){
	return 0;
}

int main (){
    int arraySize;
    std::cin >> arraySize; //size of array
    int* pArray = new int [arraySize]; //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to INT_MAX-1)
        pArray[i] = rand() % INT_MAX-1;
    }
    comb_sort(pArray, 0, arraySize-1); //comb sort
    delete[] pArray; //free the memory
    return 0;
}
