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
    int getDecimalValue(ListNode* head) {
        ListNode *th=head;
        int place=1;
        int ans=0;
        stack<int>s;
        while(th!=NULL){
            s.push(th->val);
            th=th->next;
        }
        while(!s.empty()){
            ans=ans+s.top()*place;
            place=place*2;
            s.pop();
        }
        return ans;
    }
};