#include <stdio.h>

int fibb_term() { // generator 
    static int first=0, second=1;//pointers
    int next = first;
    int third = first + second;
    first = second;
    second = third;
    return next;
}

int main(){
    for(int I=1; I <= 10; I++){
        printf("%d ",fibb_term());
    }
    return 0;
}
