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
    public Node insertAtFront(Node head, int x) {
    
        Node newNode=new Node(x);
        
        if(head==null)
            return newNode;
            
        newNode.next=head;
        
        head=newNode;
        
        return head;
        
    }
}