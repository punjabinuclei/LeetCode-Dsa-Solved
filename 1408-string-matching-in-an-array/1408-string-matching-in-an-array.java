class Solution {
    public List<String> stringMatching(String[] words) {
        
        List<String>ans=new ArrayList<String>();

        for(String str1:words)
        {
            for(String str2:words)
            {
                if(str1.equals(str2)==false)
                    {
                        if(str2.length()<str1.length())
                        {
                            if(str1.contains(str2))
                                {
                                    ans.add(str2);
                                }
                        }
                    }
            
            }
        }

        return ans;
    }
}