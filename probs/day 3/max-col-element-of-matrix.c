#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ROW_MAX_SIZE 100
#define COL_MAX_SIZE 100
void readMatrix(int num_matrix[][COL_MAX_SIZE],int row_size, int col_size){
    for(int R=0; R < row_size; R++) {
        for(int C=0; C < col_size; C++) {
            scanf("%d",&num_matrix[R][C]);
        }
    }
}
void printMaxColElements(int num_matrix[][COL_MAX_SIZE],int row_size, int col_size){
    int maxElements[COL_MAX_SIZE] = { }; // [6,9,0,0,0,0]    
     for(int R=0; R < row_size; R++) {//r=0 
        for(int C=0; C < col_size; C++) {//c=
            if(num_matrix[R][C] > maxElements[C]){
                maxElements[C] = num_matrix[R][C]; 
            }
        }
    }
    for(int C=0; C < col_size; C++) {
        printf("%d\n",maxElements[C]);
    }
}
int main() {
    int num_matrix[ROW_MAX_SIZE][COL_MAX_SIZE];
    int row_size, col_size;
    scanf("%d%d",&row_size, &col_size);
    readMatrix(num_matrix,row_size, col_size);
    printMaxColElements(num_matrix,row_size, col_size);
    return 0;
}
