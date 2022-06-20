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
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<double>ans;
        
        q.push(root);
        
        while(!q.empty())
        {
        
            int qsize=q.size();
            int currentLvlSize=qsize;
            double total=0;
                
            while(qsize--)
            {
                TreeNode* currentNode=q.front();
                q.pop();
                total+=currentNode->val;
                
                if(currentNode->left!=NULL)
                    q.push(currentNode->left);

                if(currentNode->right!=NULL)
                    q.push(currentNode->right);

            
            }
            
            ans.push_back(total/currentLvlSize);
            
        }
        
        return ans;
        
        
    }
};