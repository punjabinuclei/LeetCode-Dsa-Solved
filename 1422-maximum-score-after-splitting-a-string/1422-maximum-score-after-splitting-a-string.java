class Solution {
    public int maxScore(String s) {
        
        int countOnes=0;

        for(char ch: s.toCharArray()){
            if('1'==ch)
                countOnes++;
        }


        int zeroesOnLeft=0;
        int maxScore=0;

        for(int i=0;i<s.length()-1;i++)
        {
            if(s.charAt(i)=='0')
                zeroesOnLeft++;
            else
                countOnes--;

             int currentScore=countOnes+zeroesOnLeft;

             maxScore=Math.max(maxScore, currentScore);       
        }

        return maxScore;
    }
}