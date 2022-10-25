class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>map;
        vector<int>answer;
        
        for(int i=0;i<nums1.size();i++)
        {
            map[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            if(map.find(nums2[i])!=map.end())
            {
                answer.push_back(nums2[i]);
                map.erase(nums2[i]);
            }
        }
        
        return answer;
    }
    
    
    
};