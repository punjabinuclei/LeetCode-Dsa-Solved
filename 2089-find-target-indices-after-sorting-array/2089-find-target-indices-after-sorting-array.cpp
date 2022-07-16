class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      
        sort(nums.begin(), nums.end());
        
         vector<int>ans;
        
          int first=firstPos(nums, target);
        
                if(first==-1)
                    return ans;
        
          int last=lastPos(nums,target);
      
        for(int i=first;i<=last;i++)
        {
            ans.push_back(i);
        }
        
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
