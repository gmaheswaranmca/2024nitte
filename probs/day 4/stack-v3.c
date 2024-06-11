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

//stack_t stack = {-1,{}};

BOOL empty(stack_t *rstack) {
    return (rstack->top_index == -1);
}

E_t top(stack_t *rstack) {
    if(empty(rstack)){
        printf("Stack Empty");
        return E_T_DEFAULT;
    }

    return rstack->items[rstack->top_index];
}

BOOL full(stack_t *rstack) {
    return (rstack->top_index == MAX_SIZE-1);
}
int size(stack_t *rstack) {
    return rstack->top_index + 1;
}

void push(stack_t *rstack, E_t item) {
    if(full(rstack)) {
        printf("Stack Full\n");
        return;
    }
    rstack->top_index++;
    rstack->items[rstack->top_index] = item;
}
void pop(stack_t *rstack) {
    if(empty(rstack)) {
        printf("Stack Empty\n");
        return;
    }
    rstack->items[rstack->top_index] = E_T_DEFAULT;//
    rstack->top_index--;
}

int main () {
    stack_t salary_stack = {-1,{}};
    push(&salary_stack, 2000.0f);
    push(&salary_stack, 3000.0f);
    push(&salary_stack, 5000.0f);
    push(&salary_stack, 3500.0f);
    push(&salary_stack, 2500.0f);
    push(&salary_stack, 1500.0f);//!!!

    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);//!!!

    stack_t price_stack = {-1,{}};
    push(&price_stack, 20.0f);
    push(&price_stack, 35.0f);
    push(&price_stack, 40.0f);
    push(&price_stack, 15.0f);
    push(&price_stack, 30.0f);
    push(&price_stack, 75.0f);//!!!

    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);//!!!

    
    return 0;
}