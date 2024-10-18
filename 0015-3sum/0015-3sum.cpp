class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        if (nums.size() < 3)
            return {};

        sort(nums.begin(), nums.end());

        if (nums[0] > 0)
            return {};

            vector<vector<int>>answer;

         for(int i=0;i<nums.size()-2;i++)
         {
    
             if (i > 0 && nums[i] == nums[i - 1]) continue;

            int low=i+1;
            int high=nums.size()-1;

            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high]>0)
                    high--;
                else if(nums[i]+nums[low]+nums[high]<0)
                    low++;
                else
                    {
                    answer.push_back({nums[i], nums[low], nums[high]});

                    int last_low_occur=nums[low];
                    int last_high_occur=nums[high];

                    while(low<high && nums[low] == last_low_occur)
                        low++;

                    while(low<high && nums[high] == last_high_occur)
                        high--;    
                    }        
            }

            
         }   

         return answer;
    }
};