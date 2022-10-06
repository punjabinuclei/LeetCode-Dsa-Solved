class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(n==1 && trust.size()==0)
            return 1;
        
        vector<int>inDegree(n+1);
        vector<int>outDegree(n+1);
        
        for(auto currentGroup:trust)
        {
            int a=currentGroup[0];
            int b=currentGroup[1];
            
            inDegree[b]+=1;
            outDegree[a]+=1;
        }
        
        
        for(int i=0;i<=n;i++)
        {
            if(inDegree[i]==n-1 && outDegree[i]==0)
                return i;
        }
        
        
        return -1;
    }
};