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
    ListNode* reverseList(ListNode* head) {
        ListNode *tempNode=NULL, *previousNode=NULL, *currentNode=head;
        
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