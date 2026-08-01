class Solution {
    public int longestConsecutive(int[] nums) {
        Arrays.sort(nums); 
        int maxSeq=1;
        int count=1;
        int arraySize=nums.length-1;

        if(nums.length == 0)
            return 0;

        if(nums.length == 1)
            return 1;

        for(int i=0;i<arraySize;i++)
        {
             if(nums[i]==nums[i+1])
                continue;
             else if(nums[i+1]==(nums[i]+1))
                count++;
             else
                count=1;

        maxSeq=Math.max(count,maxSeq);
        }

    return maxSeq;
    }
}