class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
     
        priority_queue<pair<int,int>>maxHeap;
        unordered_map<int,int>map;
        
        vector<int>answer;
        
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        
        
        for(auto i=map.begin();i!=map.end();i++)
        {
            maxHeap.push({-i->second, i->first});
        }
        
        while(!maxHeap.empty())
        {
            int freq=maxHeap.top().first;
            int currentValue=maxHeap.top().second;
            
            for(int i=0;i<abs(freq);i++)
            {
                answer.push_back(currentValue);
            }
            
              maxHeap.pop();
            
          
        }
        return answer;
    }
};