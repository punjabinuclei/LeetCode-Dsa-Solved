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
        TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder)
        {

           	//             We create Map to store inorder array values to use in the future decrreasing the time complexity from O(n^2) to O(n)

            unordered_map<int, int> inorderMap;

            for (int i = 0; i < inorder.size(); i++)
            {
                inorderMap[inorder[i]] = i;
            }
            
           	// we create a vector to keep track of preorder index
            int val = postorder.size() - 1;
            vector<int> postIndex(1, val);

            return constructTree(postorder, postIndex, inorder, 0, inorder.size() - 1, inorderMap);
        }

    TreeNode* constructTree(vector<int> &postorder, vector<int> &postIndex, vector< int > &inorder, int inStart, int inEnd, unordered_map< int, int> &inorderMap)
    {

       	//         base case
        if (postIndex[0] < 0 || inStart > inEnd)
            return NULL;

       	//         Root value is initialsed to current Value
        int currentValue = postorder[postIndex[0]];
        
               	//         Node is created from the node 
        TreeNode *currentNode = new TreeNode(currentValue);

        
       	//         currentIndex is incremeneted 
        postIndex[0] -= 1;


        int i = inorderMap[currentValue];

       	//         For left node we change end as i-1 and for right node we change start as i+1 to maintain the boundary
        
          currentNode->right = constructTree(postorder, postIndex, inorder, i + 1, inEnd, inorderMap);
        currentNode->left = constructTree(postorder, postIndex, inorder, inStart, i - 1, inorderMap);
      
        return currentNode;
    }
};