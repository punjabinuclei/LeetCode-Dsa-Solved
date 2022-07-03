class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
     
//         MaxHeap as we need to sort in increasing frequency
        
        priority_queue<pair<int,int>>maxHeap;
//         we use map to store frequncy
        unordered_map<int,int>map;
        
        vector<int>answer;
        
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        
//         we store negayive values Because we have used max heap. We want to print max frequency at the end. And if we put the negative frequency in a max heap, then it will behave like a min-heap, ie. if nums = [1,1,2,2,2,3] we make a map{nums[i], frequency} whose values will be-> ({1,2}, {2,3} {3,1}). Now, on pushing negative of frequency in max heap-> ({-1,3}, {-2,1}, {-3,2}). And while printing, we put abs(frequency) for printing an element 'frequency-number-of-times' and it will starting popping from top element which is 3 then 1 then 2.
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