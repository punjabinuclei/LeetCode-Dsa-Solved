/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<TreeNode*>stack;
        
        vector<int>ans;
        
        if(root==NULL)
            return ans;
        
        pushLeftNode(root, stack);
        
        while(!stack.empty())
        {
            TreeNode *currentNode=stack.top();
            stack.pop();
            ans.push_back(currentNode->val);
            
            
            if(currentNode->right!=NULL)
            {
                pushLeftNode(currentNode->right,stack);
            }
            
        }
            
       return ans; 
    }
    
    void pushLeftNode(TreeNode* root, stack<TreeNode*>&stack)
    {
        
        stack.push(root);
        
        while(root->left!=NULL)
        {
            stack.push(root->left);
            
            root=root->left;
        }
}
    
    
};