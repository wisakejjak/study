#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
//pA - pointer to array, N - size of array, x - desired number
int binary_search (int* pA, int N, int x){
    int left_side = 0; // left border of array
    int right_side = N-1; // right border of array
    int middle = 0; // middle of array = 0
    while (left_side <= right_side){
        middle = floor((left_side + right_side)/2); // real middle of array
        if (pA[middle] < x){ //searching on left side
            left_side = middle + 1;
        }
        else if (pA[middle] > x){ //searching on right side
            right_side = middle - 1;
        }
        else return middle;
    }
	return -1;
}

int main (void){
	printf("Size of array from 1 to %i:\n",INT_MAX);
	int N;
	scanf("%d", &N); //size of array
	printf("Number to search from 0 to %i:\n",INT_MAX-1);
	int x;
	scanf("%d", &x); //searching number
	int* pA = (int*) malloc(N*sizeof(int)); // allocate the memory
	for (int i = 0; i < N; i++){
		pA[i] = i;
	} //array filling
	int answer = binary_search (pA, N, x); //binary search
	(answer != -1) ? printf ("nA[%d] = %d\n", answer, x)
				    : printf ("%d is not in array\n", x); //answer print
	free(pA); //free the memory
    	return 0;
}
