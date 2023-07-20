#include <iostream>
#include <climits>

int linear_search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	for (int i = 0; i < N; ++i) //searching
		if (pA[i] == x)
			return i;
	return -1;
}

int main (){
	std::cout << "Size of array from 1 to " << INT_MAX << ": " << std::endl;
	int N;
	std::cin >> N;//size of array
	std::cout << "Number to search from 0 to " << INT_MAX-1 << ": " << std::endl;
	int x;
	std::cin >> x;//searching array
	int* pA = new int[N];//allocate the memory
	for (int i = 0; i < N; i++)//array filling (random number from 0 to INT_MAX-1)
		pA[i] = rand() % (INT_MAX-1);
	int answer = linear_search (pA, N, x);//linear search
	(answer != -1) ? std::cout << "A[" << answer << "] = " << x << std::endl
	               : std::cout << x << " is not in array" << std::endl;//print answer
	delete[] pA;//free the memory
	return 0;
}
