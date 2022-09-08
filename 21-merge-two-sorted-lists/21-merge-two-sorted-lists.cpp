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
       
        ListNode *p=list1;
        ListNode *q=list2;
        ListNode *dummyNode=new ListNode(-1);
        ListNode *result=dummyNode;
        
        while(p && q)
        {
            if(p->val<q->val)
            {
                ListNode *newNode=new ListNode(p->val);
                result->next=newNode;
                result=newNode;
                p=p->next;
                
                
            }
            else 
            {
                ListNode *newNode=new ListNode(q->val);
                result->next=newNode;
                result=newNode;
                q=q->next;
       
            }
        }
        
        if(p)
        {
            result->next=p;
        }

        if(q)
        {
            result->next=q;
        }

        return dummyNode->next;
    }
};