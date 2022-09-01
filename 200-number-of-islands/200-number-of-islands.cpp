class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        
        for(int currentRow=0;currentRow<m;currentRow++)
        {
            for(int currentCol=0;currentCol<n;currentCol++)
            {
                if(grid[currentRow][currentCol]=='1')
                {
                    totalIslands(grid, currentRow, currentCol, m, n);
                    ans++;
                }
            }
        }
        
        return ans;
    }
    
    void totalIslands(vector<vector<char>>& grid, int currentRow, int currentCol, int m, int n)
    {
        if(currentRow<0 || currentRow>=m || currentCol<0 || currentCol>=n || grid[currentRow][currentCol]=='0')
            return;
        
        grid[currentRow][currentCol]='0';
        
        totalIslands(grid, currentRow+1,currentCol, m,n);
        totalIslands(grid, currentRow-1,currentCol, m,n);
        totalIslands(grid, currentRow,currentCol+1, m,n);
        totalIslands(grid, currentRow,currentCol-1, m,n);
        
        return;
    }
    
};