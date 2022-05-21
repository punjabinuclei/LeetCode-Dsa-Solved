class Solution {
public:
    int longestPalindromeSubseq(string s) {

             
    int m=s.size();
    int n=m;    
        
        string s1=s;
        
        reverse(s1.begin(), s1.end());
        
        
        vector<vector<int>>dp(m, vector<int>(m,-1));
        
        
        return LPS(s,s1, 0 , 0 , m, n, dp);

        
    }
    
    
    int LPS(string &s1, string &s2,int i, int j, int m, int n, vector<vector<int>>&dp)
    {
        
        if(i>=m || j>=n)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        // int ans=0;
         
        if(s1[i]==s2[j])
        {
            
       return dp[i][j]=1+LPS(s1,s2,i+1,j+1,m,n,dp);
            
        }
        else
        {
            int a=LPS(s1,s2,i+1,j,m,n,dp);
            
            int b=LPS(s1,s2,i,j+1,m,n,dp);
            
            return dp[i][j]=max(a,b);
        }
     
        
    }
};