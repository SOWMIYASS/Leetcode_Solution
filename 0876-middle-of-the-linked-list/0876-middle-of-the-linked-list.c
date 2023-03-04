/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
       typedef struct ListNode Node;
       Node *fast=head,*slow=head;
       while(fast->next!=NULL){
           slow=slow->next;
           fast=fast->next;
           if(fast->next!=NULL)
               fast=fast->next;
       }
    return slow;
    
}