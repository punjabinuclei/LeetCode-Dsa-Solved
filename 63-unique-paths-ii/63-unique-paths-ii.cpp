class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        unordered_map<string,int>map;
        return totalWays(obstacleGrid, 0, 0, obstacleGrid.size(), obstacleGrid[0].size(),map);
        
        
    }
    
    
    
    int totalWays(vector<vector<int>>& obstacleGrid, int currentRow, int currentCol, int m, int n, unordered_map<string,int>&map)
    {
        
        if(currentRow>=m||currentCol>=n || obstacleGrid[currentRow][currentCol]==1)
            return 0;
        
        
        if(currentRow==m-1 && currentCol==n-1)
            return 1;
        
        
        string currentKey=to_string(currentRow)+"-"+to_string(currentCol);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int down=totalWays(obstacleGrid,currentRow+1,currentCol, m, n,map);
        
        int right=totalWays(obstacleGrid,currentRow,currentCol+1, m, n,map);
        
        
        return map[currentKey]=down+right;
        
        
        
        
    }
    
};