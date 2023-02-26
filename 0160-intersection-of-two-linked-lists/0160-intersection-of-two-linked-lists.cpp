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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *IP=NULL;
        if(headA==NULL && headB==NULL) return NULL;
        stack<ListNode*>s1,s2;
        ListNode *th1=headA,*th2=headB;
        while(th1!=NULL){
            s1.push(th1);
            th1=th1->next;
        }
        while(th2!=NULL){
            s2.push(th2);
            th2=th2->next;
        }
        while(s1.top()==s2.top()){
            IP=s1.top();
            s1.pop();
            s2.pop();
            if(s1.empty()||s2.empty())
                break;
        }
        return IP;
    }
};