#include <stdio.h>

int fibb_term() { // generator 
    static int first=0, second=1;//pointers
    int next = first;
    int third = first + second;
    first = second;
    second = third;
    return next;
}

int series_term() { //5,6,8,11,15,....
    static int first=5,diff=1;
    int next = first;
    first = first + diff;
    diff++;
    return next;
}

int main(){
    printf("Fibb series:\n");
    for(int I=1; I <= 10; I++){
        printf("%d ",fibb_term());
    }
    printf("\n\nSeries 5,6,8,11,15,....:\n");
    for(int I=1; I <= 10; I++){
        printf("%d ",series_term());
    }
    return 0;
}
