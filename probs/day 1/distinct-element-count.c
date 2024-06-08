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
int findDistinctCount(int* numbers, int size){ //-999
    int count = 0;
    for(int I = 0; I < size; I++){ 
        if(numbers[I] != -999){     
            count ++;
        }else{
            continue;
        }
        for(int J = I+1; J < size; J++){
            if(numbers[J] != -999 && numbers[I] == numbers[J]){
                numbers[J] = -999;
            }
        }
        
    }
    return count;
}
int main() {
    int size, numbers[MAX_SIZE];
    scanf("%d",&size);
    readNumbers(numbers,size);
    int count = findDistinctCount(numbers,size);
    printf("There are %d distinct element in the array.",count);
    return 0;
}
