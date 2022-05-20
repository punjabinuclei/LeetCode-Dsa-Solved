class Solution {
public:
    int minDistance(string word1, string word2) {
        
        unordered_map<string,int>map;
        
        return minOperations(0, 0, word1, word2, word1.length(), word2.length(),map);
        
    }
    
   int  minOperations(int i, int j, string s1, string s2, int m, int n, unordered_map<string,int>&map)
    {
        if(i>=m)
            return n-j;
        
        if(j>=n)
            return m-i;
        
       string currentKey=to_string(i)+"-"+to_string(j);
       
       if(map.find(currentKey)!=map.end())
           return map[currentKey];
       
       
        int ans=100001;
        
        if(s1[i]==s2[j])
        {
         ans=minOperations(i+1,j+1,s1,s2,m,n,map);
        }
        else
        {
            int insert=1+minOperations(i,j+1,s1,s2,m,n,map);
            int del=1+minOperations(i+1,j,s1,s2,m,n,map);
            int replace=1+minOperations(i+1,j+1,s1,s2,m,n,map);
            
            ans= min(insert, min(del,replace));
        }
        
        
        return map[currentKey]=ans;
    }
    
    
    
};