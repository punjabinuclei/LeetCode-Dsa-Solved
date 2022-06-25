/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder)
        {
           	//             unordered_map<int, int> inorderMap;

           	//             for (int i = 0; i < inorder.size(); i++)
           	//             {
           	//                 inorderMap[inorder[i]]=i;
           	//             }

            vector<int> preIndex(1, 0);

            return constructTree(preorder, preIndex, inorder, 0, inorder.size()-1);
        }

    TreeNode* constructTree(vector<int> &preorder, vector<int> &preIndex, vector< int > &inorder, int inStart, int inEnd)
    {

        if (preIndex[0] >= preorder.size() || inStart > inEnd)
            return NULL;

        int currentValue = preorder[preIndex[0]];
        preIndex[0]+=1;
        
        TreeNode *currentNode = new TreeNode(currentValue);
        
        int i=-1;
        for(i=inStart;i<inEnd;i++)
        {
            if(currentValue==inorder[i])
                break;
        }
        
        currentNode->left=constructTree(preorder, preIndex, inorder, inStart, i-1);
        currentNode->right=constructTree(preorder, preIndex, inorder, i+1, inEnd);
        
        return currentNode;
    }
};