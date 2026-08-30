class Solution {
    public static int largest(int[] arr) {
        
        int max=Integer.MIN_VALUE;
        
        for(int x:arr)
        {
            if(x>max)
                max=x;
        }
        
        
        return max;
        
    }
}
