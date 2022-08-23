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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *dummyNode=new ListNode(-1);
        ListNode *resultant=dummyNode;
        int carry=0;
        
        while(l1 && l2)
        {
            int currentVal=l1->val+l2->val+carry;
            carry=currentVal/10;
            
            ListNode *newNode=new ListNode(currentVal%10);
            resultant->next=newNode;
            resultant=newNode;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1)
        {
            int currentVal=l1->val+carry;
            carry=currentVal/10;
            ListNode *newNode=new ListNode(currentVal%10);
            resultant->next=newNode;
            resultant=newNode;
            l1=l1->next;
        }
        
        while(l2)
        {
            int currentVal=l2->val+carry;
            carry=currentVal/10;
            ListNode *newNode=new ListNode(currentVal%10);
            resultant->next=newNode;
            resultant=newNode;
            l2=l2->next;
        }
        
        if(carry)
        {
            ListNode *newNode=new ListNode(carry);
            resultant->next=newNode;
            resultant=newNode;
            
        }
        
        return dummyNode->next;
        
    }
};