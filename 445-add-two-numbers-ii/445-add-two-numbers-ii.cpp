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
        
        return reverseList(addTwolistNumber(reverseList(l1), reverseList(l2))); 
        
    }
    
// Function to add reversed linkedlist
    ListNode *addTwolistNumber(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyNode=new ListNode(-1);
        ListNode *result=dummyNode;
        int carry=0;
        
        while(l1 && l2)
        {
            int currentVal=l1->val+l2->val+carry;
            carry=currentVal/10;
            
            ListNode *newNode=new ListNode(currentVal%10);
            result->next=newNode;
            result=newNode;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1)
        {
            int currentVal=l1->val+carry;
            carry=currentVal/10;
            
            ListNode *newNode=new ListNode(currentVal%10);
            result->next=newNode;
            result=newNode;
            l1=l1->next;
        }
        
        while(l2)
        {
            int currentVal=l2->val+carry;
            carry=currentVal/10;
            
            ListNode *newNode=new ListNode(currentVal%10);
            result->next=newNode;
            result=newNode;
            l2=l2->next;
        }
        
        if(carry)
        {
            ListNode *newNode=new ListNode(carry);
            result->next=newNode;
            result=newNode;
        }
        
        return dummyNode->next;
    }
    
//     Function to reverse linkedlist
    ListNode *reverseList(ListNode *head)
    {
        ListNode *previousNode=NULL;
        ListNode *tempNode=NULL;
        ListNode *currentNode=head;
        
        while(currentNode)
        {
            tempNode=currentNode->next;
            currentNode->next=previousNode;
            previousNode=currentNode;
            currentNode=tempNode;
        }
        
        return previousNode;
    }
};