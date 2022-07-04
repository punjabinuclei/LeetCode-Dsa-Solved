#define p pair<int, pair<int,int>>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<p>maxHeap;
        vector<vector<int>>answer;
      
        for(int i=0;i<points.size();i++)
        {
            maxHeap.push({points[i][0]*points[i][0]+points[i][1]*points[i][1], {points[i][0], points[i][1]}});
            
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }
        
        
        while(!maxHeap.empty())
        {
            pair<int,int> q = maxHeap.top().second;
            
            answer.push_back({q.first, q.second});
         
            maxHeap.pop();
        }
        
        return answer;
    }
};