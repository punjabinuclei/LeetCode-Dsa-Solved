class Solution {
    public void rotate(int[] nums, int k) {

        int n=nums.length;
        if(k>n)
            k=k%n;

        reverse(0,n-1,nums);
        reverse(0,k-1,nums);
        reverse(k,n-1,nums);
        
        
    }

    public void reverse(int start, int end, int[] num)
    {
        int temp;

        while(start<end)
        {
            temp=num[start];
            num[start]=num[end];
            num[end]=temp;

            start++;
            end--;
        }
    }
}