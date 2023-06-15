#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int binary_search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	int left_side = 0;
    int right_side = N-1;
    int middle = 0;
    while (left_side <= right_side)
    {
        middle = floor((left_side + right_side)/2);
        if (*(pA+middle) < x)
        {
            left_side = middle + 1;
        }
        else if (*(pA+middle) > x)
        {
            right_side = middle - 1;
        }
        else return middle;
    }
	return -1;
}

int main (void){
	printf("Size of array from 1 to %i:\n",INT_MAX);
	int N;
	scanf("%d", &N);
	printf("Number to search from 0 to %i:\n",INT_MAX-1);
	int x;
	scanf("%d", &x);
	int* pA = (int*) malloc(N*sizeof(int));
	for (int i = 0; i < N; i++){
		*(pA+i) = i;
	}
	int answer = binary_search (pA, N, x);
	((answer < N)&&(answer >= 0)) ? printf ("nA[%d] = %d\n", answer, x)
				      : printf ("%d is not in array\n", x);
	return 0;
}
