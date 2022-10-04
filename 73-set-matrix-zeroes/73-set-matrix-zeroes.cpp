class Solution {
public:
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
    
    void makeZero(vector<vector<int>>& matrix, int currentRow, int currentCol, int rowSize, int colSize) {

        for(int i=0;i<rowSize;i++)
        {
           if(matrix[i][currentCol]!=0)
           {
            matrix[i][currentCol]=-99;
           }
        }

         for(int i=0;i<colSize;i++)
        {
             
         if( matrix[currentRow][i]!=0)
            {
            matrix[currentRow][i]=-99;
            }
         }
             
            

        
       }
    
};