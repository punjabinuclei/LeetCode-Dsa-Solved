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
        solve(root, answer);
        return answer;
    }
    
    
    void solve(TreeNode* node, vector<int>&answer)
    {
        
        if(node==NULL)
            return;
        
        answer.push_back(node->val);
        solve(node->left, answer);
        solve(node->right,answer);
           
        return;
        
    }
};