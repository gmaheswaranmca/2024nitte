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
//traversal used recursion | visit/print and travel
void doTraversal(node_t* rE) {
    if(rE == NULL) {
        return;
    }
    printf("%.2f ", rE->data);
    doTraversal(rE->next);
}

int main()
{
    //20.0f, 15.0f, 35.0f, 40.0f, 25.0f    
    node_t* head = createNode(20.0f);
    head->next = createNode(15.0f);
    head->next->next = createNode(35.0f);
    head->next->next->next = createNode(40.0f);
    head->next->next->next->next = createNode(25.0f);

    doTraversal(head);
    return 0;
}

/*

Stack Frames for recursion funtion:
    [20.0f,1012] [15.0f,1024] [35.0f,1036] [40.0f,1048] [25.0f,0] 
    1000         1012         1024         1036         1048

doTraversal(rE=NULL)         | STOP
doTraversal(rE=[25.0f,0])    | print 25, doTraversal(NULL), STOP
doTraversal(rE=[40.0f,1048]) | print 40, doTraversal([25.0f,0]), STOP
doTraversal(rE=[35.0f,1036]) | print 35, doTraversal([40.0f,1048]), STOP
doTraversal(rE=[15.0f,1024]) | print 15, doTraversal([35.0f,1036]), STOP
doTraversal(rE=[20.0f,1012]) | print 20, doTraversal([15.0f,1024]), STOP
__main__() | doTraversal([20.0f,1012]), STOP

stdout 20.00 15.00 35.00 40.00 25.00

*/