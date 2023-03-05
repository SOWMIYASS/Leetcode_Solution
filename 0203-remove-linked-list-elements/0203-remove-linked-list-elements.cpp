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
    ListNode* removeElements(ListNode* head, int val) {
        typedef ListNode Node;
        Node *th=head;
        Node *prev;
        if(head==NULL) return NULL;
        while(head!=NULL && head->val==val){
           head=head->next;
        }
        th=head;
        while(th!=NULL){
            if(th->val==val){
                    prev->next=th->next;
                    th=th->next;
            }
            else{
               prev=th;
               th=th->next; 
            }
         
        }
       return head;
    }
};