class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        unordered_map<string,int>map;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int ans=0;
        int sideLength=0;
        
        for(int currentRow=0;currentRow<m;currentRow++)
        {
            for(int currentCol=0;currentCol<n;currentCol++)
            {
                if(matrix[currentRow][currentCol]=='1')
                {
                    sideLength = maximalValue(matrix, currentRow, currentCol, m, n,map);
                    ans=max(ans, sideLength*sideLength);           
                }
                    
                    
            }
        }
        
        
        return ans;  
        
    }
    
    
    int maximalValue(vector<vector<char>>&matrix, int currentRow, int currentCol, int m ,int n, unordered_map<string,int>&map)
    {
        
        if(currentRow>=m ||currentCol>=n || matrix[currentRow][currentCol]=='0')
            return 0;
        
        
        string currentKey=to_string(currentRow)+"-"+to_string(currentCol);
        
        if(map.find(currentKey)!=map.end())
           return map[currentKey];
            
        int downExpansion=1+maximalValue(matrix, currentRow+1, currentCol, m, n, map);
        int rightExpansion=1+maximalValue(matrix,currentRow, currentCol+1, m, n, map);
        int rightDiaExpansion=1+maximalValue(matrix,currentRow+1, currentCol+1, m, n, map);
        
        
        
        
        return map[currentKey]=min(downExpansion, min(rightExpansion, rightDiaExpansion));
    }
    
    
};