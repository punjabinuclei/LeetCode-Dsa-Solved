class Solution {
public:
    int minCut(string s) {
        
        unordered_map<string,int>map;
        return minimumCuts(s, 0, s.length()-1,map);
    }
    
    
    int minimumCuts(string s, int start, int end, unordered_map<string,int>&map)
    {

        if(isPalindrome(s,start,end))
            return 0;
    
        
        string currentKey=to_string(start) + "-" + to_string(end);
        
        if(map.find(currentKey)!=map.end())
            return map[currentKey];
        
        int ans=INT_MAX/2;
        
        for(int i=start;i<end;i++)
        {
            if(isPalindrome(s,start,i))
            {
                int tempAns=1+minimumCuts(s,1+i,end,map);
                ans = min(ans, tempAns);
            }
        }
        
        
        return map[currentKey]=ans;
        
    }
    
    
  bool isPalindrome(string &s, int startIndex, int endIndex) {
        
        while(endIndex >= startIndex) {
            if (s[startIndex] != s[endIndex]) {
                return false;
            }
            
            startIndex++;
            endIndex--;
        }
        
        return true;
    }  
    
};