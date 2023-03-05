/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       typedef ListNode Node;
        Node *th=head;
        Node*prev;
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        while(th->next!=NULL){
            prev=th;
            if(th->val==th->next->val){
                th->next=th->next->next;
                th=prev;
            }
            else
                th=th->next;
        }
        return head;
    }
};