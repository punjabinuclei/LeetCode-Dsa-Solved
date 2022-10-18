class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>answer;
        
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums[i];
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(k==nums[j] && i!=j)
                {
                    
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            
            }
             if(answer.size()==2) 
               break;
        }
        return answer;
    }
};