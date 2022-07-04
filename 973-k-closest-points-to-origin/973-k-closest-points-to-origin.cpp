#define p pair<int, pair<int,int>>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         We create a max heap as we want the closest and maxHeap has top as highest max which can be deleted or popped out
        priority_queue<p>maxHeap;
        vector<vector<int>>answer;

//         we traverse through the array here we only need 1 loop as the array will always be arr[n][2] size as of only 2 coordinates
        
        for(int i=0;i<points.size();i++)
        {
//             we push the distnace formula under_root x^2+Y^2 or we will directly use x^2+y^2 as it wont make asny differnce
            // with the cordinates inside the maxHeap stprage
            maxHeap.push({points[i][0]*points[i][0]+points[i][1]*points[i][1], {points[i][0], points[i][1]}});
            
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }

//         now the leftover lements are put inisde the 2d array
        while(!maxHeap.empty())
        {
            pair<int,int> q = maxHeap.top().second;
            
            answer.push_back({q.first, q.second});
         
            maxHeap.pop();
        }
        
        return answer;
    }
};