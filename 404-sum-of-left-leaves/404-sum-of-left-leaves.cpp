/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int sumOfLeftLeaves(TreeNode *root)
        {

            return LeftSum(root, false);
        }

    int LeftSum(TreeNode *root, bool onLeftLeaf)
    {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
        {
            if (onLeftLeaf)
                return root->val;
        else
            return 0;
        }
        

       int leftSum= LeftSum(root->left, true);
        int rightSum=LeftSum(root->right, false);
        
        return leftSum+rightSum;
        
    }
};