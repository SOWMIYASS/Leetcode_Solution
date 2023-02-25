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
        ListNode* th=head;
        ListNode* prev=NULL;
        ListNode* newnode;
        while(th!=NULL){
        newnode=th->next;
        th->next=prev;
        prev=th;
        th=newnode;
        }
        return prev;
    }

};