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
    int sumOfLeftLeaves(TreeNode* root) {
//         We will
        queue<pair<TreeNode*, bool>>q;
        int totalSum=0;
        
        q.push(make_pair(root, false));
        
        
        while(!q.empty())
        {
            pair<TreeNode*, bool> pairz=q.front();
            q.pop();
            
            TreeNode* node=pairz.first;
            bool isLeft=pairz.second;
            
            if(node->left==NULL && node->right==NULL && isLeft)
            {
                totalSum+=node->val;
            }
            
            if(node->left!=NULL)
                q.push(make_pair(node->left, true));
            
             if(node->right!=NULL)
                q.push(make_pair(node->right, false));
            
        }
        
        return totalSum;
        
    }
};