class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
//         we need a minHeap to get the smallest element on top and pop it.
        priority_queue<int, vector<int>, greater<int>>minHeap;
        
//         traverse the array and keep on pushing into heap untill K if greater than k then we pop out thr top element which the the smallest element
        
        for(int i=0;i<nums.size();i++)
        {
            minHeap.push(nums[i]);
            
            if(minHeap.size()>k)
            {
                minHeap.pop();
            }
        }
        
        
        return minHeap.top();
        
    }
};