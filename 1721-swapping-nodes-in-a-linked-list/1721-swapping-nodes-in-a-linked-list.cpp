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
    ListNode* swapNodes(ListNode* head, int k) {
         if(head->next==NULL)
            return head;
        
        ListNode *runner=head;
        ListNode *dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode *follower=dummyNode;
        
        
        while(--k){
            runner=runner->next;
        }
        
        ListNode *kth=runner;
        
        while(runner)
        {
            runner=runner->next;
            follower=follower->next;
        }
    
        swap(kth->val, follower->val);

    return dummyNode->next;
    }
};