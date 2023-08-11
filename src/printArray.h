void printArray(int* pArray, int ArraySize){
    for(int i = 0; i < arraySize; i++){
        printf("[%i]:[",i);
        for (int j = 0; j < pArray[i]; j++){
            printf("*");
        }
        printf("]\n");
    }
    printf("\n\n");
}
