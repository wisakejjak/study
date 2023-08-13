#include <iostream>
#include <cmath>
#include <climits>

//pA - pointer to array, N - size of array, x - desired number
int binary_search (int* pA, int N, int x){ 
    int left_side = 0;// left border of array
    int right_side = N - 1;// right border of array
    int middle = 0;// middle of array = 0
    while (left_side <= right_side){
        middle = floor((left_side + right_side)/2);// real middle of array
        if (pA[middle] < x){//searching on left side
            left_side = middle + 1;
        }
        else if (pA[middle] > x){//searching on right side
            right_side = middle - 1;
        }
        else return middle;
    }
	return -1;
}

int main (){
	std::cout << "Size of array from 1 to " << INT_MAX << ": "<< std::endl;
	int N;
	std::cin >> N;//size of array
	std::cout << "Number to search from 0 to " << INT_MAX-1 <<": " << std::endl;
	int x;
	std::cin >> x;//searching number
	int* pA = new int[N];// allocate the memory
	for (int i = 0; i < N; i++)//array filling
		pA[i] = i;
	int answer = binary_search (pA, N, x);//binary search
	((answer < N)&&(answer >= 0)) 
    	? std::cout << "A[" << answer << "] = " << x << std::endl
	   	: std::cout << x << " is not in array" << std::endl;//answer print
	delete[] pA;//free the memory
	return 0;
}
