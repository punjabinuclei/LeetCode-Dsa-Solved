class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        
        vector<int>dummy1(rowSize,-99);
        vector<int>dummy2(colSize,-99);
        
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(matrix[i][j]==0)
                {
                    dummy1[i]=0;
                    dummy2[j]=0;
                }
            }
        }
        
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(dummy1[i]==0 || dummy2[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        
    }
};