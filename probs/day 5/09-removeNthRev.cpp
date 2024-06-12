class Solution {
public:
    int getSize(ListNode* head) {
        int size = 0;
        ListNode* rE = head;
        while(rE != NULL) {
            size++;
            rE = rE->next;
        }
        return size;
    }
    ListNode* findNodeAtN(ListNode* head, int N) {
        int size = 0;

        ListNode* rE = head;
        while(rE != NULL) {
            size++;
            if(size == N){
                break;
            }
            rE = rE->next;
        }
        return rE;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = getSize(head);
        int fN = size-n+1;//from left size, the pos
        if(fN <= 0){
            return head;
        }
        if(fN == 1){
            ListNode* curr = head;
            head = curr->next;
            curr->next = NULL;
            delete curr;
        }else { 
            ListNode* prev = findNodeAtN(head,fN-1);
            ListNode* curr = prev->next;
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
        return head;
    }
};