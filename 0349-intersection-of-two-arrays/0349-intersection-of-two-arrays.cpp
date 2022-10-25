class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
       
        vector<int>answer;
        set s=set(nums1.begin(), nums1.end());
        
        for(auto x: nums2)
        {
            if(s.find(x)!=s.end())
            {
                answer.push_back(x);
                s.erase(x);
            }
         }
        
        return answer;
    }
    
    
    
};