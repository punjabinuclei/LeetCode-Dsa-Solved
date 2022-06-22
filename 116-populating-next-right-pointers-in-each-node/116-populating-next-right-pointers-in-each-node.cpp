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

            queue<Node*> q;

            if (root == NULL)
                return root;
            q.push(root);

            while (!q.empty())
            {
                int qsize = q.size();
                int qsize2=qsize;
                vector<Node*> lvls;

                while (qsize--) {
                    
                    Node * currentNode=q.front();
                    q.pop();
                    lvls.push_back(currentNode);
                    
                    if(currentNode->left!=NULL)
                        q.push(currentNode->left);
                    
                    if(currentNode->right!=NULL)
                        q.push(currentNode->right);
                }
                
                for(int i=0;i<qsize2;i++)
                {
                    if(i==qsize2-1)
                        lvls[i]->next=NULL;
                     else
                       lvls[i]->next=lvls[i+1];     
                    
                 }
                
            }
            
            return root;
        }
};