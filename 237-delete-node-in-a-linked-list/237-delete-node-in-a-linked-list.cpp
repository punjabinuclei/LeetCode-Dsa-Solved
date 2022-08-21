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
    void deleteNode(ListNode* node) {
      
//         CurrentNode value is made the next node value and then we point the currentnode next value to the next node next value
        ListNode *p;
        p=node->next;
        node->val=p->val;
        node->next=p->next;
        
    }
};