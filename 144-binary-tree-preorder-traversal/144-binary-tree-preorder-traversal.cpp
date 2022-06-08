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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>answer;
        stack<TreeNode*>stack;
        
        if(root==NULL)
            return answer;
        
        stack.push(root);
        
        while(!stack.empty())
        {
            TreeNode* currentNode=stack.top();
            stack.pop();
            answer.push_back(currentNode->val);
            
            if(currentNode->right!=NULL)
                stack.push(currentNode->right);
            
            if(currentNode->left!=NULL)
                stack.push(currentNode->left);
            
        }
        
        return answer;
        
    }
};