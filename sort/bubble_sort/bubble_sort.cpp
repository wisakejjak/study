#include <iostream>
#include <cmath>
#include <climits>

void printArray(int* pArray, int arraySize){ //print array function
    for(int i = 0; i < arraySize; i++){
		std::cout << "[" << i << "]:[";
        for (int j = 0; j < pArray[i]; j++){
			std::cout << "*";
        }
		std::cout << "]" << std::endl;
    }
	std::cout << std::endl << std::endl;	
}

int bubble_sort(int* pArray, int arraySize){
	for(int i = 0; i < arraySize - 1; i++){
		for(int j = 0; j < arraySize - i - 1; j++){
			if(pArray[j] > pArray[j+1]){
				//Swapping without tmp variable (x = x + y; y = x - y; x = x - y)
				pArray[j] = pArray[j] + pArray[j+1];
				pArray[j+1] = pArray[j] - pArray[j+1];
				pArray[j] = pArray[j] - pArray[j+1];
			}
		}
	}
	return 0;
}

int main(){
	std::cout << "Size of array from 1 to "<< INT_MAX << ": ";
    int arraySize;
	std::cin >> arraySize; //size of array
    int* pArray = new int[arraySize]; //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
	printArray(pArray, arraySize);
	bubble_sort(pArray, arraySize);//bubble sort
	printArray(pArray, arraySize);
	delete[] pArray;//free the memory	
	return 0;
}
