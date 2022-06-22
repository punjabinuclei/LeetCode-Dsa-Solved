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
                Node *prevNode=NULL;
                
                for(int i=0;i<qsize;i++)
                {
                
                    Node *currentNode = q.front();
                    q.pop();
                    
                    if(i!=0)
                        prevNode->next=currentNode;
                    
                    prevNode=currentNode;

                    if (currentNode->left != NULL)
                        q.push(currentNode->left);

                    if (currentNode->right != NULL)
                        q.push(currentNode->right);
                }
            }

            return root;
        }
};