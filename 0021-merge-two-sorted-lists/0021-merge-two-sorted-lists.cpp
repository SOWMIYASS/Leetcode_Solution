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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        typedef ListNode Node;
        Node *th1=list1;
        Node *th2=list2;
        Node *head;
        Node *point;
        int flag=0;
        if(list1==NULL&&list2==NULL)  return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(th1->val>th2->val) 
        {
            head=th2;
            point=th2;
            th2=th2->next;
        }
        else if(th1->val<=th2->val)
        {
              head=th1;
              point=th1;
              th1=th1->next;
        }
        while(th1!=NULL&&th2!=NULL)
        {
            if((th1->val)<=(th2->val))
            {
                point->next=th1;
                point=th1;
                th1=th1->next;
            }
            else
            { 
                point->next=th2;
                point=th2;
                th2=th2->next;
            }
        }
        if(th1==NULL)
            point->next=th2;
        if(th2==NULL)
            point->next=th1;
        return head;
    }
};