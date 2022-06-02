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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>ans;
        
        SumToLeaf(root, ""+to_string(root->val), ans);
        
        return ans;
        
        
    }
      
    
    
    void SumToLeaf(TreeNode *root, string currentPath, vector<string>&ans)
    {
        if(root->left==NULL && root->right==NULL)
        {
           ans.push_back(currentPath);
            return;
        }
        
        if(root->left!=NULL)
            SumToLeaf(root->left, currentPath+"->"+to_string(root->left->val), ans);
        
        if(root->right!=NULL)
            SumToLeaf(root->right, currentPath+"->"+to_string(root->right->val), ans);
     
        
        return;
    }
    
    
    
    
};