class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        long totalSum=0;
        long currSum=0;
        int avg1=0,avg2=0;
        int minAvgIndex=-1, minAvg=INT_MAX;
        for(auto x:nums)
        {
            totalSum+=x;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            currSum+=nums[i];
            avg1=(currSum/(i+1));
            
            if(i==n-1)
            {
                if(avg1<minAvg)
                    return n-1;
                else
                    break;
            }
            
            avg2=(totalSum-currSum)/(n-i-1);
            
            int diff=abs(avg1-avg2);
            
            if(diff<minAvg)
            {
                minAvg=diff;
                minAvgIndex=i;
            }
        }  
        
        return minAvgIndex;
    }
};