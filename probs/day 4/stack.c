#include<stdio.h>
#include "stack.h"

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

