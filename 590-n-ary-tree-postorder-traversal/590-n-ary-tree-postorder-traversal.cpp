/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
    public:
        vector<int> postorder(Node *root)
        {

            vector<int> answer;

            postOrder(root, answer);

            return answer;
        }

    void postOrder(Node *root, vector<int> &answer)
    {
        if (root == NULL)
            return;

        for (auto currentChild: root->children)
        {
            postOrder(currentChild, answer);
        }

        answer.push_back(root->val);

        return;
    }
};