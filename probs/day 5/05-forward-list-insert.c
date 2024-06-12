#include <stdio.h>
#include <stdlib.h>
typedef struct _node_t{
    float data;
    struct _node_t* next;
} node_t;
node_t* createNode(float item) {
    node_t* rE = (node_t*)malloc(
            sizeof(node_t));//
    rE->data = item;
    rE->next = NULL;
    return rE;
}
void doTraversal(node_t* head) {
    node_t* rE = head;
    while(rE != NULL) {
        printf("%.2f ",rE->data);
        rE = rE->next;
    }
}
node_t* insertFirst(node_t* head, float item) {
    node_t* rE = createNode(item);//[item,NULL]
    if(head==NULL){
        head = rE;
    }else{
        rE->next = head;
        head = rE;
    }
    return head;
}


int main()
{
    //20.0f, 15.0f, 35.0f, 40.0f, 25.0f    
    node_t* head = insertFirst(NULL,20.0f); //20.0f -> X
    head = insertFirst(head,15.0f); // 15.0f -> 20.0f -> X
    head = insertFirst(head,35.0f); // 35.0f -> 15.0f -> 20.0f -> X
    head = insertFirst(head,40.0f); // 40.0f -> 35.0f -> 15.0f -> 20.0f -> X
    head = insertFirst(head,25.0f); // 25.0f -> 40.0f -> 35.0f -> 15.0f -> 20.0f -> X
    doTraversal(head);
    //release alloc's blocks
    return 0;
}




