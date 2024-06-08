/*
    float price_matrix = 
        [
            [20.0,35.0],
            [20.0,40.0],
            [15.0,30.0],
            [30.0,60.0]
        ]; //4 x 2

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 100
void readMatrix(int num_matrix[][MAX_SIZE],int size){
    for(int R=0; R < size; R++) {
        for(int C=0; C < size; C++) {
            scanf("%d",&num_matrix[R][C]);
        }
    }
}
void printTranspose(int num_matrix[][MAX_SIZE],int size){
    for(int R=0; R < size; R++) {
        for(int C=0; C < size; C++) {
            printf("%d ",num_matrix[R][C]);
        }
        printf("\n");
    }
    printf("Transpose matrix is:\n");
    for(int R=0; R < size; R++) {
        for(int C=0; C < size; C++) {
            printf("%d ",num_matrix[C][R]);
        }
        printf("\n");
    }
}
int main() {
    int num_matrix[MAX_SIZE][MAX_SIZE];
    int size;
    scanf("%d",&size);
    readMatrix(num_matrix,size);
    printTranspose(num_matrix,size);
    return 0;
}
