#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// pA - pointer to array, N - size of array, x - desired number
int linear_search (int* pA, int N, int x){ // linear search
	for (int i = 0; i < N; i++) // searching
		if (pA[i] == x)
			return i;
	return -1;
}

int main (void){
	int N;
	scanf("%d", &N); // size of array
	int x;
	scanf("%d", &x); // required number
	int* pA = (int*) malloc(N*sizeof(int)); // allocate the memory
	for (int i = 0; i < N; i++){ // array filling (random number from 0 to INT_MAX-1)
		pA[i] = rand() % INT_MAX-1;
	}
	// int answer = linear_search (pA, N, x); // linear search
	free(pA); // free the memory
    return 0;
}
