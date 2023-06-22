#include <iostream>
#include <cmath>
#include <climits>
int binary_search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	int left_side = 0;
    int right_side = N - 1;
    int middle = 0;
    while (left_side <= right_side)
    {
        middle = floor((left_side + right_side)/2);
        if (pA[middle] < x)
        {
            left_side = middle + 1;
        }
        else if (pA[middle] > x)
        {
            right_side = middle - 1;
        }
        else return middle;
    }
	return -1;
}

int main (){
	std::cout << "Size of array from 1 to " << INT_MAX << ": "<< std::endl;
	int N;
	std::cin >> N;
	std::cout << "Number to search from 0 to " << INT_MAX-1 <<": " << std::endl;
	int x;
	std::cin >> x;
	int* pA = new int[N];
	for (int i = 0; i < N; i++)
		pA[i] = i;
	int answer = binary_search (pA, N, x);
	((answer < N)&&(answer >= 0)) 
                            ? std::cout << "A[" << answer << "] = " << x << std::endl
	                        : std::cout << x << " is not in array" << std::endl;
	delete[] pA;
	return 0;
}
