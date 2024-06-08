/*
Input 1 [4]
3 2 1 2
Output 
3 2 1

Input 2 [8]
3 2 3 3 1 2 3 1
3 2 3 1 2 3 1
Output 2
3 2 1

*/

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
void removeDuplicates(int* numbers, int* size){
    for(int I = 0; I < (*size); I++){ // select e 
        for(int J = I + 1; J < (*size); J++){ // check next elements
            if(numbers[J] == numbers[I]){
                for(int K=J+1; K < (*size); K++) { //shift left <- removal
                    numbers[K-1] = numbers[K];
                }
                (*size)--;
                J--;
            }
        }
    }
}
int main() {
    int numbers[MAX_SIZE], size;
    scanf("%d",&size);
    readNumbers(numbers,size);
    removeDuplicates(numbers,&size);
    printNumbers(numbers,size);
    return 0;
}
