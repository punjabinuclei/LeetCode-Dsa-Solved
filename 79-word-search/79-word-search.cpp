class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        
        for(int currentRow=0;currentRow<m;currentRow++)
        {
            for(int currentCol=0;currentCol<n;currentCol++)
            {
                if(board[currentRow][currentCol]==word[0])
                {
                    if(dfs(board, currentRow, currentCol, 0, m, n, word))
                    {
                        return true;
                    }
                }
            }
        }
        
     return false;   
    }
    

    
    
    
    
    bool dfs(vector<vector<char>>& board, int currentRow, int currentCol, int currentCharIndex, int m, int n, string word)
    {
        if(word.length()<=currentCharIndex)
            return true;
        
        if(currentRow<0 || currentCol<0 || currentRow>=m || currentCol>=n ||                        board[currentRow][currentCol]!=word[currentCharIndex])
            return false;
        
        char currentWord=board[currentRow][currentCol];
        board[currentRow][currentCol]='.';
        
        
        bool found =dfs(board, currentRow+1, currentCol, currentCharIndex+1,m, n, word) ||
                    dfs(board, currentRow-1, currentCol, currentCharIndex+1,m, n, word) ||
                    dfs(board, currentRow, currentCol+1, currentCharIndex+1,m, n, word) ||
                    dfs(board, currentRow, currentCol-1, currentCharIndex+1,m, n, word);
        
        board[currentRow][currentCol]=currentWord;
        
        return found;
    }
    
};