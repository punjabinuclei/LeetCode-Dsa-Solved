class Solution {
public:
    int uniquePaths(int m, int n) {
        
        unordered_map<string,int>map;
        return totalWays(0,0,m,n,map);
    }
    
    int totalWays(int currentRow, int currentCol, int targetRow, int targetCol, unordered_map<string,int>&map)
    {
        if(currentRow==targetRow-1 && currentCol==targetCol-1)
            return 1;
         
        if(currentRow>=targetRow || currentCol>=targetCol)
            return 0;
        
        string currentKey=to_string(currentRow)+"-"+to_string(currentCol);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        
        int down=totalWays(currentRow+1, currentCol, targetRow, targetCol,map);
        int right=totalWays(currentRow, currentCol+1, targetRow, targetCol,map);
        
        
        return map[currentKey] = down+right;
        
    }
};