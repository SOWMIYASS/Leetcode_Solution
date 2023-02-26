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
    bool isPalindrome(ListNode* head) {
        typedef ListNode NODE;
        NODE* th=head;
        stack<int>res;
        while(th!=NULL){
            res.push(th->val);
            th=th->next;
        }
        th=head;
        while(th!=NULL){
            if(th->val!=res.top()) return 0;
            th=th->next;
            res.pop();
        }
        return 1;
        
        
        
    }
};