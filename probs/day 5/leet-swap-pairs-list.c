/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* rE1 = head;
    struct ListNode* rE2;
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