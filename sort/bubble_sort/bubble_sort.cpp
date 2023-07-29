#include <iostream>
#include <cmath>
#include <climits>

int bubble_sort(int* pArray, int sizeOfArray){
	for(int i = 0; i < sizeOfArray - 1; i++){
		for(int j = 0; j < sizeOfArray - i - 1; j++){
			if(pArray[j] > pArray[j+1]){
				//Swapping without tmp variable
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
	for(int i = 0; i < arraySize; i++){ //printing raw array
		std::cout << pArray[i] << " ";
    }
	bubble_sort(pArray, arraySize);//bubble sort
	std::cout << std::endl;
	for(int i = 0; i < arraySize; i++){ //printing sorted array
		std::cout << pArray[i] << " ";
    } 
	delete[] pArray;//free the memory	
	return 0;
}
