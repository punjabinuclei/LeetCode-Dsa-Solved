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
     
//         dummyNode to keep a starting point so that we can return
//         head value after merging the two lists
        
        ListNode *dummyNode=new ListNode(-1);
        ListNode *result=dummyNode;
        
//         pointers to traverse the two linkedlists
        ListNode *p=list1;
        ListNode *q=list2;
        
//         while any of the two dont point to Null we keep on traversing till end
        while(p && q)
        {
            if(p->val<q->val)
            {
    //              we create a new node add value to it
    //              the next node of result(dummy node ) is pointer to the newNode
    //              result node(dummyNode) is updated to newNode
    //              we move the pointer to next pointer as we have used this value
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
        
//         Now if any one of the list still has values then,
//         we add the complete list to the resultant list
        if(p)
        {
            result->next=p;
        }
        
        if(q)
        {
            result->next=q;
        }
        
//         the next of the dummtnode created intially is gonna be the head of the 
//         resultant list
        return dummyNode->next;
    }
};