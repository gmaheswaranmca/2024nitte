/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int item) {
    struct ListNode* rE = (struct ListNode*)malloc(sizeof(struct ListNode));
    rE->val = item;
    rE->next = NULL;
    return rE;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int d1=0,d2=0,carry=0;
    struct ListNode* output = NULL;
    struct ListNode* output_tail = NULL;


    struct ListNode* rE1 = l1;
    struct ListNode* rE2 = l2;
    while(rE1 != NULL || rE2 != NULL || carry != 0) {
        //construct output node and add to output list 
        d1 = 0;
        d2 = 0;
        if(rE1 != NULL) {
            d1 = rE1->val;
            rE1 = rE1->next;
        }
        if(rE2 != NULL) {
            d2 = rE2->val;
            rE2 = rE2->next;
        }
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        struct ListNode* oE = createNode(sum);
        if(output_tail == NULL){
            output_tail = oE;
            output = oE;
        }else{
            output_tail->next = oE;
            output_tail = oE;
        }
    }
    return output;
}