class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
      
        int leftSum=0;
        int sum=0;
        int rightSum=accumulate(nums.begin(), nums.end(), sum);
        
        for(int i=0;i<nums.size();i++)
        {
            rightSum-=nums[i];
            
            if(leftSum==rightSum)
                return i;
            
            leftSum+=nums[i];
        }
        
        return -1;      
    }
};