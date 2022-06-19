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
        queue<TreeNode*>q;
        
        if(root==NULL)
            return answer;
        
        q.push(root);
        
        while(!q.empty())
        {
        
            int qsize=q.size();
            vector<int>levelz;
            
            while(qsize--)
            {
                TreeNode* currentNode=q.front();
                q.pop();
                levelz.push_back(currentNode->val);
                
                if(currentNode->left!=NULL)
                    q.push(currentNode->left);
                
                if(currentNode->right!=NULL)
                    q.push(currentNode->right);
                
            }
            
            answer.push_back(levelz);
            
        }
        
        return answer;
        
    }
};