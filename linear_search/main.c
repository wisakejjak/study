#include <stdio.h>
#include <stdlib.h>

int search (int* pA, int N, int x){ //linear search
				    //pA - pointer to array
				    //N - size of array
				    //x - desired number
	for (int i = 0; i < N; i++)
		if (*(pA+i) == x)
			return i;
	return -1;
}

int main (void){
	printf("Size of array from 1 to 999999:\n");
	int N;
	scanf("%d", &N);
	printf("Number to search from 0 to 32767:\n");
	int x;
	scanf("%d", &x);
	int* pA = (int*) malloc(N*sizeof(int));
	for (int i = 0; i < N; i++){
		*(pA+i) = rand() % 32768;
	}
	int answer = search (pA, N, x);
	((answer < N)&&(answer >= 0)) ? printf ("nA[%d] = %d\n", answer, x)
				      : printf ("%d is not in array\n", x);
	return 0;
}
