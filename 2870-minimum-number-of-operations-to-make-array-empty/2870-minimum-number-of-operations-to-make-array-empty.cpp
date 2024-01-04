class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int ans=0;

        for(auto val:nums)
        {
            mp[val]++;
        }


        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==1)
                return -1;

            ans+=it->second/3;

            if(it->second%3)
                ans++;           
        }

        return ans;
    }
};