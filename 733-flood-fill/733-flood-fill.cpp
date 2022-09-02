class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int source=image[sr][sc];
        
        if(source==color){
            return image;
        }
        
        
        dfs(image,sr,sc,color, source);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int currentRow, int currentCol, int color, int source)
    {
        if(currentRow<0 || currentCol<0 || currentRow>=image.size() || currentRow>=image[0].size() || image[currentRow][currentCol]!=source)
            return;
        
        image[currentRow][currentCol]=color;
        
        dfs(image, currentRow+1, currentCol, color, source);
        dfs(image, currentRow-1, currentCol, color, source);
        dfs(image, currentRow, currentCol+1, color,source);
        dfs(image, currentRow, currentCol-1, color, source);
        
        return;
    }
};