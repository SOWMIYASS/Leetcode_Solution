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
    ListNode* reverseList(ListNode* head) {
          typedef ListNode Node;
          Node *th=head;
          Node *newnode;
          Node *prev=NULL;
          while(th!=NULL){
              newnode=th->next;
              th->next=prev;
              prev=th;
              th=newnode;
          }
        return prev;
    }

};