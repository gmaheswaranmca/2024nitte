#include<stdio.h>
#define MAX_SIZE 5
#define E_T_DEFAULT 0.0f
typedef float E_t; 
typedef int BOOL; 

int top_index = -1;
E_t items[MAX_SIZE];

BOOL empty() {
    return (top_index == -1);
}

E_t top() {
    if(empty()){
        printf("Stack Empty");
        return E_T_DEFAULT;
    }

    return items[top_index];
}

BOOL full() {
    return (top_index == MAX_SIZE-1);
}
int size() {
    return top_index + 1;
}

void push(E_t item) {
    if(full()) {
        printf("Stack Full\n");
        return;
    }
    top_index++;
    items[top_index] = item;
}
void pop() {
    if(empty()) {
        printf("Stack Empty\n");
        return;
    }
    items[top_index] = E_T_DEFAULT;//
    top_index--;
}

int main () {
    push(2000.0f);
    push(3000.0f);
    push(5000.0f);
    push(3500.0f);
    push(2500.0f);
    push(1500.0f);//!!!

    printf("%.2f ", top()); pop();
    printf("%.2f ", top()); pop();
    printf("%.2f ", top()); pop();
    printf("%.2f ", top()); pop();
    printf("%.2f ", top()); pop();
    printf("%.2f ", top()); pop();//!!!
    return 0;
}