#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
// #include <ncurses.h>

int bubble_sort(int* pArray, int arraySize){
	for(int i = 0; i < arraySize - 1; i++){
		for(int j = 0; j < arraySize - i - 1; j++){
			if(pArray[j] > pArray[j+1]){
				// Swapping without tmp variable (x = x + y; y = x - y; x = x - y)
				pArray[j]   = pArray[j] + pArray[j+1];
				pArray[j+1] = pArray[j] - pArray[j+1];
				pArray[j]   = pArray[j] - pArray[j+1];
			}
		}
	}
	return 0;
}
/*
 * 							IN PROGRESS NCURSES
 * Need to use printw or mvprintw or another asdfasfd_print_adfasff functions to display 
 * array bars. For example, A[0] displays on 1st row, A[1] on 2nd etc. Or idk i wanna
 * sleep. 
int main(){
	initscr();
	noecho();
	curs_set(0);
	printw("Size of array from 1 to %i:\n", INT_MAX);
    int arraySize;
    scanw("%d", &arraySize); //size of array
    int* pArray = (int*)malloc(arraySize*sizeof(int)); //allocate the memory
    for(int i = 0; i < arraySize; i++){ //array filling (random number from 0 to 50)
        pArray[i] = rand() % 50;
    }
	for(int i = 0; i < arraySize; i++){
        mvprintw("1,0,\n[%d][",pArray[i]);
		for(int j = 0; j < pArray[i]; j++){
			printw("#");
		}
		printw("]");
    }
	bubble_sort(pArray, arraySize); //bubble sort
	for(int i = 0; i < arraySize; i++){
		printw("\n[");
		for(int j = 0; j < pArray[i]; j++){
			printw("#");
		}
		printw("]");
    }
	endwin();
	free(pArray); //free the memory
	return 0;
}
