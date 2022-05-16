class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        unordered_map<string,int>map;
        
        return minSum(grid, 0, 0, grid.size(), grid[0].size(),map);
    }
    
    
    
    int minSum(vector<vector<int>>&grid, int currentRow,int currentColumn, int m, int n, unordered_map<string,int>&map)
    {
        
        if(currentRow==m-1 && currentColumn==n-1)
            return grid[currentRow][currentColumn];
        
        if(currentRow>=m || currentColumn>=n)
            return 100001;
        
        string currentKey=to_string(currentRow)+"-"+to_string(currentColumn);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int down=grid[currentRow][currentColumn]+minSum(grid, currentRow+1,currentColumn,m, n,map);
        
        int right=grid[currentRow][currentColumn]+minSum(grid, currentRow,currentColumn+1,m, n,map);
    
        return map[currentKey]=min(down,right);
    }

    
     
};