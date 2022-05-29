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
    int maxDepth(Node* root) {
        
        return maxHeight(root);
    }
    
    int maxHeight(Node *root)
    {
        if(root==NULL)
            return 0;
        
        
        
        int ans=0;
        
        for(auto currentChild:root->children)
        {
            ans=max(ans, maxHeight(currentChild));
        }
        
        
        return ans+1;
        
        
    }
    
    
    
};