#include<stdio.h>
#include"queue.h"
BOOL empty(queue_t *rqueue) {
    return(size(rqueue) == 0);
}
BOOL full(queue_t *rqueue) { 
    return(size(rqueue) == MAX_SIZE);
}
int size(queue_t *rqueue) {
    return rqueue->back_index + 1; 
}
E_t front(queue_t *rqueue) {
    if(empty(rqueue)) {
        printf("Queue Empty");
        return E_T_DEFAULT;
    }
    return rqueue->items[rqueue->front_index];
}
void push_back(queue_t *rqueue,  E_t item) { 
    if(full(rqueue)){
        printf("Queue Full\n");
        return;
    }

    rqueue->back_index++;
    rqueue->items[rqueue->back_index] = item;
    if(rqueue->front_index == -1) { 
        rqueue->front_index=0;
    }
}
void pop_front(queue_t *rqueue) { 
    if(empty(rqueue)){
        printf("Queue Empty\n");
        return;
    }
    rqueue->items[rqueue->front_index] = E_T_DEFAULT;//
    rqueue->front_index++;
    if(rqueue->front_index > rqueue->back_index) {
        rqueue->front_index = -1;
        rqueue->back_index = -1;
    }
}
