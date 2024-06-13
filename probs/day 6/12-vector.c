#include<stdio.h>
#include<stdlib.h>
typedef struct  { 
    float* salaries;
    int size;
    int capacity;
    int max_size;
}vector_t;
vector_t* createVector();
void push_back(vector_t* vector, float salary);

void emptyVector(vector_t* vector);

vector_t* createVector() {
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));
    vector->capacity = size;
    if(vector->capacity <= 0) {vector->capacity = 10;}
    vector->size = 0;
    vector->max_size = 100000;
    vector->salaries = (float*)malloc(sizeof(float)*vector->capacity);
    return vector;
}
void emptyVector(vector_t* vector){
    free(vector->salaries);
    vector->salaries = NULL;
    free(vector);
    vector = NULL;
}
void push_back(vector_t* vector, float salary){
    if(vector->capacity <= vector->size) {
        //dynamic array 
        if(vector->capacity + 10 <= vector->max_size){
            vector->capacity += 10;
            vector->salaries = (float*)realloc(salaries,
                        sizeof(float)*vector->capacity);
        }else{
            printf("vector exhausted\n");
            return;
        }
    }
    vector->salaries[vector->size] = salary;
    vector->size++;
}
int main() {
    vector_t* vector = createVector();
    printf("Salaries:[size=%d,capacity=%d]\n",vector->size,vector->capacity);
    for(int I=1; I<=10; I++){
        push_back(vector,1000.0f*I);
    }
    printf("Salaries:[size=%d,capacity=%d]\n",vector->size,vector->capacity);
    for(int J=0; J<vector->size;J++){
        printf("%.2f ", vector->salaries[J]);
    }

    emptyVector(vector);
}