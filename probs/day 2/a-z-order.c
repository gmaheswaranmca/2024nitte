#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10000

void readNames(char names[][255], int size){
    for(int I = 0; I < size; I++){
        scanf("%s",names[I]);
    }
}

void swap(char* first, char* second){
    char temp[255];
    strcpy(temp, first);
    strcpy(first, second);
    strcpy(second, temp);
}
void sort(char names[][255], int size) {
    for(int I = 0; I < (size-1); I++) { 
        int MIN_ELE_INDEX = I;
        for(int J = I + 1; J < size; J++) { 
            if(strcmp(names[J],names[MIN_ELE_INDEX]) < 0) {
                MIN_ELE_INDEX = J;
            }
        }
        if(I != MIN_ELE_INDEX) {
            swap(names[I],names[MIN_ELE_INDEX]);
        }
    }
}
void printNames(char names[][255], int size){
    for(int I = 0; I < size; I++){
        printf("%s\n",names[I]);
    }
}

int main() {

    char names[MAX_SIZE][255];
    int size;
    scanf("%d",&size);
    readNames(names,size);
    sort(names,size);
    printf("The Sorted names is:\n");
    printNames(names,size);
    return 0;
}
