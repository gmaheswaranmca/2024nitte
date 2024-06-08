#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10000

struct _emp_t {
    int emp_no;
    char name[255];
    float salary;
};
typedef struct _emp_t emp_t;

void readEmployees(emp_t* employees, int size){
    for(int I = 0; I < size; I++){
        scanf("%d%s%f",&employees[I].emp_no,
                        employees[I].name,
                        &employees[I].salary);
    }
}
void swap(emp_t* first, emp_t* second){
    emp_t temp = (*first);
    (*first) = (*second);
    (*second) = temp;
}
void sort(emp_t* employees, int size) {
    for(int I = 0; I < (size-1); I++) { //selection | passes #size-1 
        int MIN_ELE_INDEX = I;
        for(int J = I + 1; J < size; J++) { // comparisons :: < MIN_ELE_INDEX
            if(employees[J].salary < employees[MIN_ELE_INDEX].salary) {
                MIN_ELE_INDEX = J;
            }
        }
        if(I != MIN_ELE_INDEX) {
            swap(&employees[I],&employees[MIN_ELE_INDEX]);
        }
    }
}
void printEmployees(emp_t* employees, int size){
    for(int I = 0; I < size; I++){
        printf("[num=%d,name=%s,sal=%.2f]\n",employees[I].emp_no,
                        employees[I].name,
                        employees[I].salary);
    }
}

int main() {

    emp_t employees[MAX_SIZE];
    int size;
    scanf("%d",&size);
    readEmployees(employees,size);
    sort(employees,size);
    printf("The Sorted array is:\n");
    printEmployees(employees,size);
    return 0;
}


/*
5
101 sannidhi 25000
102 aditya 34000
103 krishna 18000
104 pranathi 28000
105 varsha 19000
*/