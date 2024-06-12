class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* rE1 = head;
        ListNode* rE2;
        while(rE1 != NULL) {
            rE2 = rE1->next;
            if(rE2 == NULL) {
                break;
            }
            int T = rE1->val;//do swap // by data 
            rE1->val = rE2->val;
            rE2->val = T; //
            rE1 = rE2->next;
        }
        return head;
    }
};