class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        
        for(int currentCol=0;currentCol<n;currentCol++){  
                dfs(grid, 0, currentCol, m, n);
                dfs(grid, m-1, currentCol, m, n);
        }
        for(int currentRow=0;currentRow<m;currentRow++){
            
                dfs(grid, currentRow, 0, m, n);
                dfs(grid, currentRow, n-1, m, n);
        }
        
        for(int currentRow=0;currentRow<m;currentRow++){
            for(int currentCol=0;currentCol<n;currentCol++){
                if(grid[currentRow][currentCol]==0){
                    dfs(grid, currentRow, currentCol, m,n);
                    ans++;
                }
            }
        }
            
    return ans;
    }
    
    void dfs(vector<vector<int>>& grid, int currentRow, int currentCol, int m, int n)
    {
        if(currentRow<0 || currentRow>=m || currentCol<0 || currentCol>=n || grid[currentRow][currentCol]==1)
            return;
        
        grid[currentRow][currentCol]=1;
        
        dfs(grid, currentRow+1, currentCol, m, n);
        dfs(grid, currentRow-1, currentCol, m, n);
        dfs(grid, currentRow, currentCol+1, m, n);
        dfs(grid, currentRow, currentCol-1, m, n);
        
        return;
    }
};