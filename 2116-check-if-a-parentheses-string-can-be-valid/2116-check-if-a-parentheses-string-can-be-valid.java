class Solution {
    public boolean canBeValid(String s, String locked) {
        int countOpenBracket = 0;
        int countCloseBracket = 0;
        int countOne = 0;
        int countZero = 0;

    if(s.length()==1 || s.length()%2!=0)
        return false;

        for (char ch : s.toCharArray()) {
            if (ch == '(')
                countOpenBracket++;
            else
                countCloseBracket++;
        }
        for (char ch : locked.toCharArray()) {
            if (ch == '1')
                countOne++;
            else
                countZero++;
        }

        if (countOpenBracket == countCloseBracket || Math.abs(countOpenBracket - countCloseBracket) <= countZero)
            return true;
        else
            return false;
    }
}