/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return 0;
        else if(head->next==NULL) return 0;
        typedef ListNode NODE;
        NODE* fast=head;
        NODE* slow=head;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            if(fast==slow)
                return 1;
        }
        return 0;
        
    }
};