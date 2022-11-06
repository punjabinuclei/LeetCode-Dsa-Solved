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
        solve(root, answer);
        return answer;
    }
    
    
    void solve(Node * node, vector<int>&answer)
    {
        if(node==NULL)
            return;
        
        
        answer.push_back(node->val);
        for(auto x:node->children)
        {
            solve(x, answer);
        }
        
    }
    
};