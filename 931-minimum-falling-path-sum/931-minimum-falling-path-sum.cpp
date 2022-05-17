class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        unordered_map<string,int>map;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int ans=INT_MAX;
        
        for(int currentColumn=0; currentColumn<n; currentColumn++)
        {
        int temp_ans=minSum(matrix, 0, currentColumn, m, n, map);    
        ans=min(temp_ans, ans);
        }
        
        return ans;   
    }
    
    
    int minSum(vector<vector<int>>&matrix, int currentRow, int currentColumn, int m, int n, unordered_map<string,int>&map)
    {

        if(currentColumn<0 || currentColumn>=n)
            return 100001;
    
        if(currentRow==m-1)
            return matrix[currentRow][currentColumn];
    
    
        string currentKey=to_string(currentRow)+"-"+to_string(currentColumn);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int down=matrix[currentRow][currentColumn]+minSum(matrix, currentRow+1, currentColumn, m, n,map);
        
        int leftDiagonal=matrix[currentRow][currentColumn]+minSum(matrix, currentRow+1, currentColumn-1, m, n,map);
        
int rightDiagonal=matrix[currentRow][currentColumn]+minSum(matrix, currentRow+1, currentColumn+1, m, n,map);
        

        return map[currentKey] = min(down, min(leftDiagonal, rightDiagonal));
        
        
    }
    
    
    
};