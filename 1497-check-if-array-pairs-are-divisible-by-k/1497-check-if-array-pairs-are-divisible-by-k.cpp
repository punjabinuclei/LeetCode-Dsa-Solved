class Solution
{
    public:
        bool canArrange(vector<int> &arr, int k)
        {

            vector<int>map(k,0);

            int currentRemainder = 0;

            for (auto val: arr)
            {
                currentRemainder = ((val % k) + k) % k;
                map[currentRemainder]++;
            }
            
            
            for(int i=0;i<=k/2;i++)
            {
                if(i==0)
                {
                   if(map[i]%2!=0)
                    return false;
                }
            
            else
            {
                if(map[i] != map[k-i])
                    return false;
            }
            }
            
            
            return true;
            
            
            
            
            
            
            
            
            
        }
};