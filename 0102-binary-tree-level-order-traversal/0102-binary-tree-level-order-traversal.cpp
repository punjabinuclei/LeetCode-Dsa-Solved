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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>answer;
        if(root==NULL)
            return answer;
        
        queue<TreeNode*>q;        
        q.push(root);
        
        while(!q.empty())
        {
            
            vector<int>lvl;
            int size=q.size();
            
            while(size--)
            {
                TreeNode *temp=q.front();
                q.pop();
                lvl.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            answer.push_back(lvl);               
        }
        
        
        return answer;
    }
};