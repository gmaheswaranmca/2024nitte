#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10000

void readNumbers(int* numbers, int size){
    for(int I = 0; I < size; I++){
        scanf("%d",&numbers[I]);
    }
}
void swap(int* first, int* second){
    int temp = (*first);
    (*first) = (*second);
    (*second) = temp;
}
void sort(int* numbers, int size) {
    for(int I = 0; I < (size-1); I++) { //selection | passes #size-1 
        int MIN_ELE_INDEX = I;
        for(int J = I + 1; J < size; J++) { // comparisons :: < MIN_ELE_INDEX
            if(numbers[J] < numbers[MIN_ELE_INDEX]) {
                MIN_ELE_INDEX = J;
            }
        }
        if(I != MIN_ELE_INDEX) {
            swap(&numbers[I],&numbers[MIN_ELE_INDEX]);
        }
    }
}
void printNumbers(int* numbers, int size){
    for(int I = 0; I < size; I++){
        printf("%d\n",numbers[I]);
    }
}

int main() {

    int numbers[MAX_SIZE];
    int size;
    scanf("%d",&size);
    readNumbers(numbers,size);
    sort(numbers,size);
    printf("The Sorted array is:\n");
    printNumbers(numbers,size);
    return 0;
}
