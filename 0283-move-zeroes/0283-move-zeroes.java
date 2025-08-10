class Solution {
    public void moveZeroes(int[] nums) {

            int zeroes=0;
            int pos=0;

            for(int i=0;i<nums.length;i++)
            {
                if(nums[i]!=0)
                {
                    nums[pos]=nums[i];
                    pos++;
                }
                else
                    zeroes++;
            }

            int x=nums.length-zeroes;

            while(x<nums.length)
                {
                    nums[x]=0;
                    x++;
                }


    }
}