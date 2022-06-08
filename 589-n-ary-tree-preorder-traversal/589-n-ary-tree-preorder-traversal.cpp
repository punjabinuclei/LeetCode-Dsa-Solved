/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
     
        vector<int>answer;
        stack<Node*>stack;
        
        if(root==NULL)
            return answer;
        
        stack.push(root);
        
        while(!stack.empty())
        {

            Node* currentNode=stack.top();
            stack.pop();
            
            answer.push_back(currentNode->val);
            
            
            for(int i=currentNode->children.size()-1;i>=0;i--)
            {
                stack.push(currentNode->children[i]);
              
            }
      
       }
       
        
        
        return answer;      
    }
};


