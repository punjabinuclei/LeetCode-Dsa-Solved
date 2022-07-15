class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        combinations(0, 0, "", n, ans);
        
        return ans;
    }
    
//     Function to store all combiantions in a vector of type string
    void combinations(int openCount, int closeCount, string expression, int n, vector<string>&ans)
    {
//         if number of open brackets equals to close bracket and openBracket count is equal to
//         n then we have found an expression and we store it into our vector of strings
        
        if(openCount==n  && openCount==closeCount)
        {
            ans.push_back(expression);
            return;
        }
        
        if(openCount<n)
            combinations(openCount+1, closeCount, expression+'(', n, ans);
        
        if(openCount>closeCount)
            combinations(openCount, closeCount+1, expression+')', n, ans);
        
        
        return;
    }    
    
};