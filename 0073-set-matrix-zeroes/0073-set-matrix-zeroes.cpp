class Solution {
public:
    
    
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
    
        vector<int>rowMatrix(rowSize, -99);
        vector<int>colMatrix(colSize, -99);
        
        
        
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowMatrix[i]=0;
                    colMatrix[j]=0;
                }
            }
        }
        
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(rowMatrix[i]==0|| colMatrix[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};