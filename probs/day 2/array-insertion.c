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
void printNumbers(int* numbers, int size){
    for(int I = 0; I < size; I++){
        printf("%d\n",numbers[I]);
    }
}
void insert(int* numbers,int size,int position,int new_number){
    for(int I = size-1; I >= (position - 1); I--){
        numbers[I+1] = numbers[I];
    }
    numbers[position-1] = new_number;
}
int main() {
    int numbers[MAX_SIZE], size, position, new_number;
    scanf("%d",&size);
    readNumbers(numbers,size);
    scanf("%d%d",&position,&new_number);
    if(position > size){
        printf("Invalid Input");
        return 0;
    }
    insert(numbers,size,position,new_number);
    size++;
    printf("Array after insertion is\n");
    printNumbers(numbers,size);
    return 0;
}
