int getSize(struct ListNode* head) {
    int size = 0;
    struct ListNode* rE = head;
    while(rE != NULL) {
        size++;
        rE = rE->next;
    }
    return size;
}
struct ListNode* findNodeAtN(struct ListNode* head, int N) {
    int size = 0;

    struct ListNode* rE = head;
    while(rE != NULL) {
        size++;
        if(size == N){
            break;
        }
        rE = rE->next;
    }
    return rE;
}
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    //n=2 from right side 
    //size=5,size-n=5-2=3 prev node before the node being node deleted
    int size = getSize(head);
    int fN = size-n+1;//from left size, the pos
    if(fN <= 0){
        return head;
    }
    if(fN == 1){
        struct ListNode* curr = head;
        head = curr->next;
        curr->next = NULL;
        free(curr);
    }else { 
        struct ListNode* prev = findNodeAtN(head,fN-1);
        struct ListNode* curr = prev->next;
        prev->next = curr->next;
        curr->next = NULL;
        free(curr);
    }
    return head;
}