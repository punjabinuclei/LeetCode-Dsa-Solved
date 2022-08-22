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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode *currentNode=head;
        ListNode *previousNode=dummyNode;
        
        
        while(currentNode)
        {
            if(currentNode->val==val)
                previousNode->next=currentNode->next;
            else
                previousNode=currentNode;
                
            currentNode=currentNode->next;    
        }
        
        return dummyNode->next;
    }
};