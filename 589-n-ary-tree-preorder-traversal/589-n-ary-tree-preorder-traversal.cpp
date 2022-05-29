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
        
        preorderTraversal(root, answer);
        
        return answer;
        
    }
    
    
    void preorderTraversal(Node *root, vector<int>&answer)
    {
        
        if(root==NULL)
            return;
        
        
        answer.push_back(root->val);
        
        for(auto currentChild:root->children)
        {
            preorderTraversal(currentChild, answer);
        }
        
        
        
        return;
        
    }
    
    
    
};