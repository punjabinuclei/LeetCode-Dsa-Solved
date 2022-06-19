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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        int height=0;
        
        if(root==NULL)
            return height;
        
        q.push(root);
        
        
        while(!q.empty())
        {
            int qsize=q.size();
            
                while(qsize--)
                {
                    TreeNode* currentNode=q.front();
                    q.pop();

                    if(currentNode->left!=NULL)
                        q.push(currentNode->left);

                    if(currentNode->right!=NULL)
                        q.push(currentNode->right);
                }
            
                height++;
        }
        
        return height;
    }
};