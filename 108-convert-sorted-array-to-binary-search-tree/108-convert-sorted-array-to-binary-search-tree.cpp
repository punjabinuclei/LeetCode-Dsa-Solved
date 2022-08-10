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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
      if(nums.size()==0)
          return NULL;

        return arrayToBinarySearchTree(nums, 0, nums.size()-1);
    }
    
    
    TreeNode *arrayToBinarySearchTree(vector<int>&nums, int left, int right)
    {
        if(left>right)
            return NULL;
        
        int mid=left+(right-left)/2;
        
        TreeNode *Node=new TreeNode(nums[mid]);
        
        Node->left=arrayToBinarySearchTree(nums, left, mid-1);
        Node->right=arrayToBinarySearchTree(nums, mid+1, right);
        
        return Node;
    }
    
};