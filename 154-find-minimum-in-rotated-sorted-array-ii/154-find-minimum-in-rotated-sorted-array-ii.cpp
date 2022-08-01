class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        
        while(start<end)
        {
            int mid=start+(end-start)/2;
            
            if(nums[mid]>nums[end])//Left half is sorted then we move to unsorted right part  

                start=mid+1;
            else if(nums[end]>nums[mid]) //right half is sorted then we move to unsorted left part
                end=mid;
            else                           
                end=end-1;//             when last element = mid element

        }
        
        return nums[start];
    }
};