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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int>tree1,tree2;
        
        checkSimilar(root1,tree1);
        checkSimilar(root2,tree2);
        
        if(tree1==tree2)
            return true;
        return false;
        
    }
    
   void checkSimilar(TreeNode* root, vector<int>&tree)
    {
        if(root==NULL)
            return;
       
       
       if(root->left==NULL && root->right==NULL)
       {
           tree.push_back(root->val);
       }
       
       if(root->left!=NULL)
           checkSimilar(root->left, tree);

       if(root->right!=NULL)
           checkSimilar(root->right, tree);

       
       return;
    }
    
    
    
};