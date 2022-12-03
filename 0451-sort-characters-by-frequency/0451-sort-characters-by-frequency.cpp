class Solution {
public:
    string frequencySort(string s) {
     
       unordered_map<char,int>m;
       priority_queue<pair<int,char>>maxHeap;
        
        for(auto ch:s)
        {
            m[ch]++;
        }
        
        for(auto ch: m)
        {
            maxHeap.push({ch.second,ch.first});
        }
        
         s="";
        
        while(!maxHeap.empty())
        {
            s+=string(maxHeap.top().first, maxHeap.top().second);
            maxHeap.pop();
        }
        
        
        return s;
    }
    
};