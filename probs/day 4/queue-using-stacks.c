
typedef struct {
    int top_index;
    int items[1000];
} MyStack;

bool myStackEmpty(MyStack* obj);
MyStack* myStackCreate() {
    MyStack* rstack = (MyStack*)malloc(sizeof(MyStack));
    rstack->top_index = -1;
    return rstack;
}

void myStackPush(MyStack* obj, int x) {
    obj->top_index++;
    obj->items[obj->top_index] = x;
}

int myStackPop(MyStack* obj) {
    if(myStackEmpty(obj)){
        return -1;
    }
    int peek = obj->items[obj->top_index];
    obj->top_index--;
    return peek;
}

int myStackPeek(MyStack* obj) {
    if(myStackEmpty(obj)){
        return -1;
    }
    int peek = obj->items[obj->top_index];
    return peek;
}

bool myStackEmpty(MyStack* obj) {
    return obj->top_index == -1;
}

void myStackFree(MyStack* obj) {
    free(obj);
    obj = NULL;
}

typedef struct {
    MyStack* rstack1;
    MyStack* rstack2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* rqueue = (MyQueue*)malloc(sizeof(MyQueue));
    rqueue->rstack1 = myStackCreate();
    rqueue->rstack2 = myStackCreate();
    return rqueue;
}

void myQueuePush(MyQueue* obj, int x) {
    myStackPush(obj->rstack1,x);
}

int myQueuePop(MyQueue* obj) {
    //copy stack1 to stack2
    if(myStackEmpty(obj->rstack2)){
        while(!myStackEmpty(obj->rstack1)){
            myStackPush(obj->rstack2,
                myStackPop(obj->rstack1));
        }
    }
    //
    if(!myStackEmpty(obj->rstack2)){
        return myStackPop(obj->rstack2);
    }

    return -1;//??
}

int myQueuePeek(MyQueue* obj) {
    //copy stack1 to stack2
    if(myStackEmpty(obj->rstack2)){
        while(!myStackEmpty(obj->rstack1)){
            myStackPush(obj->rstack2,
                myStackPop(obj->rstack1));
        }
    }
    //
    if(!myStackEmpty(obj->rstack2)){
        return myStackPeek(obj->rstack2);
    }

    return -1;//??
}

bool myQueueEmpty(MyQueue* obj) {
    return myStackEmpty(obj->rstack1) 
        && myStackEmpty(obj->rstack2); 
}

void myQueueFree(MyQueue* obj) {
    myStackFree(obj->rstack1);
    myStackFree(obj->rstack2);
    free(obj);
    obj = NULL;
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/