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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL || head->next==NULL)
            return NULL;
        
        ListNode *runner=head;
        ListNode *dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode *follower=dummyNode;
        
        
        while(n--)
        {
            runner=runner->next;
        }
        
        while(runner)
        {
            runner=runner->next;
            follower=follower->next;
        }
    
        follower->next=follower->next->next;

    return dummyNode->next;
        
    }
};