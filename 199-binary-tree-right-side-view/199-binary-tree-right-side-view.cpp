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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>answer;
        
        solution(root, 0, answer);
        
        return answer;
    }
    
    
    void solution(TreeNode* node, int level, vector<int>&answer)
    {
        if(node==NULL)
            return;
        
        if(answer.size()==level)
        {
            answer.push_back(node->val);
        }
        
        solution(node->right, level+1, answer);
        solution(node->left, level+1, answer);
 
        return;
        
    }
    
};