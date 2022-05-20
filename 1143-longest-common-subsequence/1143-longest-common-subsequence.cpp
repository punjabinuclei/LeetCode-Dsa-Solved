class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
     
    int m=text1.size();
    int n=text2.size();    
        
        vector<vector<int>>dp(m, vector<int>(n,-1));
        
        
        return LCS(text1,text2, 0 , 0 , m, n, dp);
    }
    
    
    
    int LCS(string &s1, string &s2,int i, int j, int m, int n, vector<vector<int>>&dp)
    {
        
        if(i>=m || j>=n)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        // int ans=0;
         
        if(s1[i]==s2[j])
        {
            
       return dp[i][j]=1+LCS(s1,s2,i+1,j+1,m,n,dp);
            
        }
        else
        {
            int a=LCS(s1,s2,i+1,j,m,n,dp);
            
            int b=LCS(s1,s2,i,j+1,m,n,dp);
            
            return dp[i][j]=max(a,b);
        }
     
        
    }
};