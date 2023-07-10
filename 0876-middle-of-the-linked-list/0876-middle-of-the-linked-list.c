/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
       typedef struct ListNode Node;
       Node *slow=head,*fast=head;
       //if(head==NULL) return NULL;
       if(head->next==NULL) return head;
       while(fast!=NULL){
           fast=fast->next;
           if(fast!=NULL) 
           {
               fast=fast->next;
               slow=slow->next;
           }
       }
    return slow;
       
    
}