class Solution {
public:
    
    
    void makeZero(vector<vector<int>>&matrix, int rowVal, int colVal, int rowSize, int colSize)
    {
        for(int i=0;i<colSize;i++)
        {
            if(matrix[rowVal][i])
            {
                matrix[rowVal][i]=-99;
            }
        }
        
        
        
        for(int i=0;i<rowSize;i++)
        {
            if(matrix[i][colVal])
            {
                matrix[i][colVal]=-99;
            }
        }
        
        
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(matrix[i][j]==0)
                {
                    makeZero(matrix, i, j, rowSize, colSize);
                }
            }
        }
        
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(matrix[i][j]==-99)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};