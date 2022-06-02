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
    int sumRootToLeaf(TreeNode* root) {
     
        vector<int>ans(1,0);
        
        SumToLeaf(root, ""+to_string(root->val), ans);
        
        return ans[0];
    }
    
    
    
    void SumToLeaf(TreeNode *root, string currentPath, vector<int>&ans)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans[0]+=stoi(currentPath, 0, 2);
            return;
        }
        
        if(root->left!=NULL)
            SumToLeaf(root->left, currentPath+to_string(root->left->val), ans);
        
        if(root->right!=NULL)
            SumToLeaf(root->right, currentPath+to_string(root->right->val), ans);
     
        
        return;
    }
};