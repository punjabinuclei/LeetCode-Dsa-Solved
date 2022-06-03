/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool isCousins(TreeNode *root, int x, int y)
        {

            vector<int> parents(2, -1);
            vector<int> levels(2, -1);

            checkCousins(root, x, y,  new TreeNode(-1), 0, parents, levels);

            if (parents[0] != parents[1] && levels[0] == levels[1])
                return true;
            else
                return false;
        }

    void checkCousins(TreeNode *root, int x, int y, TreeNode* currentParent, int currentlvl, vector<int> &parents, vector<int>&levels)
    {

        if (root == NULL)
            return;

        if(parents[0]!=-1 && parents[1]!=-1)
            return;
        
        if (x == root->val)
        {
            parents[0] = currentParent->val;
            levels[0] = currentlvl;
        }
        
         if (y == root->val)
        {
            parents[1] = currentParent->val;
            levels[1] = currentlvl;
        }
        
        
        checkCousins(root->left, x, y, root, currentlvl+1, parents, levels);
        checkCousins(root->right, x, y, root, currentlvl+1, parents, levels);
        
        return;
        
        
        
    }
};