class Solution {
public:
    int uniquePaths(int m, int n) {
     
        unordered_map<string,int>map;
      return totalWays(0,0,m,n,map);  
        
    }
    
    
    int totalWays(int currentRow, int currentCol, int m, int n, unordered_map<string,int>&map)
    {
        
        if(currentRow==m-1 && currentCol==n-1)
            return 1;
        
        if(currentRow>=m || currentCol>=n)
            return 0;
        
        string currentKey=to_string(currentRow)+"-"+to_string(currentCol);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int down=totalWays(currentRow+1,currentCol, m, n,map);
        int right=totalWays(currentRow,currentCol+1, m, n,map);
        
        return map[currentKey]=down+right;
    }
    
};