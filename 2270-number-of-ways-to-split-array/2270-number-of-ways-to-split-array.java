class Solution {
    public int waysToSplitArray(int[] nums) {

     long leftSum=0;
     long totalSum=0;
     int ans=0;

     for(int x:nums)
     {
        totalSum+=x;
     }


     for(int i=0;i<nums.length;i++)
     {
        leftSum+=nums[i];
        long rightSum=totalSum-leftSum;
    
        if(leftSum>=rightSum)
            ans++;
     }

return ans-1;

    }
}