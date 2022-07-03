class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
// Map to store frequency of each number
            unordered_map<int, int> map;
        
//             minheap as we need to find TOP occuring so min as it keeps minimum elements at the top
            priority_queue<pair<int,int>, vector <pair<int,int>>, greater <pair<int,int>>> minHeap;
            
            vector<int>answer;

//             Store values in map as Key= nums[i] and then value as its frequency
            for (int i = 0; i < nums.size(); i++) {
                map[nums[i]]++;
            }
            
//             traverse the map and store it in minHeap
            for(auto i=map.begin();i!=map.end();i++)
            {
                minHeap.push({i->second,i->first});
                
//                 if size of minheap is larger than  k we pop the min elements on top out
                if(minHeap.size()>k)
                {
                    minHeap.pop();
                }
            }
            
            while(!minHeap.empty())
            {
               answer.push_back(minHeap.top().second);
                minHeap.pop();
            }
            
            return answer;
        }
};