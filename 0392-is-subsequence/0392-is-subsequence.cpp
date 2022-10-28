class Solution {
public:
    bool isSubsequence(string s, string t) {
     
        
        int n=s.length(), m=t.length();
        int j=0;
        
        for(int i=0;i<m && j<n; i++)
        {
            if(t[i]==s[j])
                j++;
        }
        
        
        return (j==n);
    }
};