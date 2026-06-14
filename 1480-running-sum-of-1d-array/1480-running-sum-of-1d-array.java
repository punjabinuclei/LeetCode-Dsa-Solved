class Solution {
    public int[] runningSum(int[] nums) {
        int[] ans=new int[nums.length];
        int runningSum=nums[0];
        ans[0]=nums[0];

        for(int i=1;i<nums.length;i++)
        {
            runningSum=nums[i]+runningSum;
            ans[i]=runningSum;
        }

           return ans;
    }
}