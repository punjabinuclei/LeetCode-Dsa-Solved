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

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
          vector<vector<int>>answer;
        queue<Node*>q;
        
        if(root==NULL)
            return answer;
        
        q.push(root);
        
        while(!q.empty())
        {
        
            int qsize=q.size();
            vector<int>levelz;
            
            while(qsize--)
            {
                Node* currentNode=q.front();
                q.pop();
                levelz.push_back(currentNode->val);
                
                
                for(auto currentChild:currentNode->children)
                {
                    q.push(currentChild);
                }
                
            }
            
            answer.push_back(levelz);
            
        }
        
        return answer;

        
        
    }
};