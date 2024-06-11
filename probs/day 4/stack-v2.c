#include<stdio.h>
#define MAX_SIZE 5
#define E_T_DEFAULT 0.0f
typedef float E_t; 
typedef int BOOL; 

struct _stack_t {
    int top_index;
    E_t items[MAX_SIZE];
};
typedef struct _stack_t stack_t;

stack_t stack = {-1,{}};

BOOL empty() {
    return (stack.top_index == -1);
}

E_t top() {
    if(empty()){
        printf("Stack Empty");
        return E_T_DEFAULT;
    }

    return stack.items[stack.top_index];
}

BOOL full() {
    return (stack.top_index == MAX_SIZE-1);
}
int size() {
    return stack.top_index + 1;
}

void push(E_t item) {
    if(full()) {
        printf("Stack Full\n");
        return;
    }
    stack.top_index++;
    stack.items[stack.top_index] = item;
}
void pop() {
    if(empty()) {
        printf("Stack Empty\n");
        return;
    }
    stack.items[stack.top_index] = E_T_DEFAULT;//
    stack.top_index--;
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