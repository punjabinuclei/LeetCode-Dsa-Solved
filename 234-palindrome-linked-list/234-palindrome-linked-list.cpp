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
        
        ListNode *middle_ptr=middleofList(head);
        ListNode *rightHalf=middle_ptr->next;
        middle_ptr->next=NULL;
        ListNode *leftHalf=head;
        
        
        return compare(leftHalf, reverseList(rightHalf));
        
        
    }
    
    bool compare(ListNode *leftHalf, ListNode *rightHalf)
    {
        ListNode *p=leftHalf;
        ListNode *q=rightHalf;
        
        
        while(p && q)
        {
            if(p->val!=q->val)
            {
                return false;
            }
            p=p->next;
            q=q->next;
        }
        
        return true;
    }
    
    ListNode *middleofList(ListNode *head)
    {
        ListNode *slow_ptr=head;
        ListNode *fast_ptr=head;
        
        while(fast_ptr->next && fast_ptr->next->next)
        {
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next->next;
        }
        
        return slow_ptr;
    }
        
    ListNode *reverseList(ListNode *head)
    {
        ListNode *tempNode=NULL;
        ListNode *previousNode=NULL;
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