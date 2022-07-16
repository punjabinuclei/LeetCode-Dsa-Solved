class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans(2,-1);
        int first=firstPos(nums, target);
        int last=lastPos(nums,target);
        
        ans[0]=first;
        ans[1]=last;
        return ans;
    }
    
    int firstPos(vector<int>&nums, int target)
    {
        int start=0, end=nums.size()-1;
        int ansIndex=-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(nums[mid]==target)
            {
                ansIndex=mid;
                end=mid-1;
            }
           else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
       
        return ansIndex;
    }

     int lastPos(vector<int>&nums, int target)
    {
        int start=0, end=nums.size()-1;
        int ansIndex=-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(nums[mid]==target)
            {
                ansIndex=mid;
                start=mid+1;
            }
           else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
       
        return ansIndex;
    }

    
};