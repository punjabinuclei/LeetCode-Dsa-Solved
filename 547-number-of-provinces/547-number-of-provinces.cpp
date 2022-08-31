class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int vertices=isConnected.size();
        int ans=0;
        vector<bool>visited(vertices,false);
        
        for(int i=0;i<vertices;i++) {
            if(visited[i]==false) {
                dfs(visited, isConnected, i);
               ans++;
            }
        }
        
        return ans;
    }
    
    void dfs(vector<bool>&visited, vector<vector<int>>& isConnected, int currentVertex) {
        
        if(visited[currentVertex])
            return;
        
        visited[currentVertex]=true;
        
//         Gives Row Value
        vector<int>currentCity=isConnected[currentVertex];
    
        for(int i=0;i<isConnected.size();i++) {
            if(currentCity[i]==1)
                dfs(visited,isConnected,i);
        }
        
    }
    
};