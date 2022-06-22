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
        bool isSameTree(TreeNode *p, TreeNode *q)
        {

           	//        we will store both tree nodes as a pair inside the queue
            queue<pair<TreeNode*, TreeNode*>> queue;

           	//             we push both node values as a pair into the queue
            queue.push(make_pair(p, q));

           	//           we perfrom the ususal bfs operation untill queue is empty
            while (!queue.empty())
            {

                pair<TreeNode*, TreeNode*> values = queue.front();
                queue.pop();
                TreeNode *pNode = values.first;
                TreeNode *qNode = values.second;

               	//                 If we find both nodes are null we move forward
                if (pNode == NULL && qNode == NULL)
                    continue;

                if (pNode == NULL || qNode == NULL || pNode->val != qNode->val)
                    return false;
               	// recursive calls
                if (pNode->left != NULL || qNode->left != NULL)
                    queue.push(make_pair(pNode->left, qNode->left));

                if (pNode->right != NULL || qNode->right != NULL)
                    queue.push(make_pair(pNode->right, qNode->right));
            }

            return true;
        }
};