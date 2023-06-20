#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int linear_search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	for (int i = 0; i < N; i++)
		if (pA[i] == x)
			return i;
	return -1;
}

int main (void){
	printf("Size of array from 1 to %i:\n", INT_MAX);
	int N;
	scanf("%d", &N);
	printf("Number to search from 0 to %i:\n", INT_MAX-1);
	int x;
	scanf("%d", &x);
	int* pA = (int*) malloc(N*sizeof(int));
	for (int i = 0; i < N; i++){
		pA[i] = rand() % INT_MAX-1;
	}
	int answer = linear_search (pA, N, x);
	((answer != -1) ? printf ("nA[%d] = %d\n", answer, x)
                        : printf ("%d is not in array\n", x);
	return 0;
}
