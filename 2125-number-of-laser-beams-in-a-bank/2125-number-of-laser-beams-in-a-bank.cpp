class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int prev=0;

        for(auto row1:bank)
        {
            int count1=0;
    
            for(auto ch:row1)
            {
                if(ch=='1')
                    count1++;
            }
                if(count1!=0)
                {
                    ans=ans+(prev*count1);
                    prev=count1;
                }
            
        }

return ans;
    }
};