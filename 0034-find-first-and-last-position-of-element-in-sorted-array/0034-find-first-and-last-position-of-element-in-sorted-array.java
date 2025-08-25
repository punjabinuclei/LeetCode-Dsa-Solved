class Solution {

    int firstOccurence(int arr[], int x)
    {
        int start=0;
        int end=arr.length-1;
        int ans=-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x)
            {
                   ans=mid;
                   end=mid-1;
            }
            else if(arr[mid]>x)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
                
            }
        }
        
        return ans;
    }
    
    
    
    int lastOccurence(int arr[], int x)
    {
        int start=0;
        int end=arr.length-1;
        int ans=-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x)
            {
                   ans=mid;
                   start=mid+1;
            }
            else if(arr[mid]<x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
                
            }
        }
        
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int first=firstOccurence( nums, target);
        int last=lastOccurence( nums, target);
       
        int[] answer=new int[2];
        
        answer[0]=first;  
        answer[1]=last;

        return answer;   
    }
}