#include <iostream>
#include <climits>

int linear_search (int* pA, int N, int x){ // linear search
				    // pA - pointer to array
				    // N - size of array
				    // x - desired number
	for (int i = 0; i < N; ++i) // searching
		if (pA[i] == x)
			return i;
	return -1;
}

int main (){
	int N;
	std::cin >> N; // size of array
	int x;
	std::cin >> x; // searching array
	int* pA = new int[N]; // allocate the memory
	for (int i = 0; i < N; i++) // array filling (random number from 0 to INT_MAX-1)
		pA[i] = rand() % (INT_MAX-1);
	int answer = linear_search (pA, N, x); // linear search
	delete[] pA; // free the memory
	return 0;
}
