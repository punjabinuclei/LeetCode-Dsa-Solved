class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder ans=new StringBuilder();
        int count1 = word1.length();
        int count2 = word2.length();

        int i=0,j=0;

        while (i < count1 && j < count2) {
            
            ans.append(word1.charAt(i)).append(word2.charAt(j));
            i++;
            j++;
        }

        while (j < count2) {
            ans.append(word2.charAt(j));
            j++;
        }

        while (i < count1) {
            ans.append(word1.charAt(i));
            i++;
        }

        return ans.toString();
    }
    }