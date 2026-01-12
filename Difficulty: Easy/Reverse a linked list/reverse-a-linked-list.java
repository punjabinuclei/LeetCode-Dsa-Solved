/*
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}
*/

class Solution {
    Node reverseList(Node head) {
        
        if(head==null || head.next==null)
            return head;
            
        
    Node prev=null;
    Node curr=head;
    Node nextt=head.next;

        while(nextt!=null)
        {
            curr.next=prev;
            prev=curr;
            curr=nextt;
            nextt=nextt.next;
        }   
        curr.next=prev;
        head=curr;

        return head;     
        
    }
}