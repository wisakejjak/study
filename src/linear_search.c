#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int linear_search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	for (int i = 0; i < N; i++) //searching
		if (pA[i] == x)
			return i;
	return -1;
}

int main (void){
	printf("Size of array from 1 to %i:\n", INT_MAX);
	int N;
	scanf("%d", &N);//size of array
	printf("Number to search from 0 to %i:\n", INT_MAX-1);
	int x;
	scanf("%d", &x);//searching array
	int* pA = (int*) malloc(N*sizeof(int));//allocate the memory
	for (int i = 0; i < N; i++){//array filling (random number from 0 to INT_MAX-1)
		pA[i] = rand() % INT_MAX-1;
	}
	int answer = linear_search (pA, N, x);//linear search
	(answer != -1) ? printf ("nA[%d] = %d\n", answer, x)
                   : printf ("%d is not in array\n", x);//print answer
	free(pA);//free the memory
    	return 0;
}
