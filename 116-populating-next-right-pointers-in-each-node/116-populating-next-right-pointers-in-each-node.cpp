/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
    public:
        Node* connect(Node *root)
        {
           	// Create a queue to store node values

            queue<Node*> q;
           	// corner case
            if (root == NULL)
                return root;
            
              q.push(root);

//             usual Bfs
            while (!q.empty())
            {
                int qsize = q.size();
                int qsize2 = qsize;
                vector<Node*> lvls;

                Node *prevNode=NULL;
//                 we traverse the tree in such a way that we get tree nodes lvl by lvl in a vector at once
                for(int i=0;i<qsize;i++)
                {
                    

                    Node *currentNode = q.front();
                    q.pop();
                    lvls.push_back(currentNode);
                    
                    if(i!=0)
                        prevNode->next=currentNode;
                    
                    prevNode=currentNode;

                    if (currentNode->left != NULL)
                        q.push(currentNode->left);

                    if (currentNode->right != NULL)
                        q.push(currentNode->right);
                }
//                 Now we will make the next node of last node as null and for other nodes the next node will be just next node

                // for (int i = 0; i < qsize2; i++)
                // {
                //     if (i == qsize2 - 1)
                //         lvls[i]->next = NULL;
                //     else
                //         lvls[i]->next = lvls[i + 1];
                // }
            }

            return root;
        }
};