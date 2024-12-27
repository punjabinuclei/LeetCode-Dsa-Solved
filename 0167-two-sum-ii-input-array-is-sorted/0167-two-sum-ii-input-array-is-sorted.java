class Solution {
    public int[] twoSum(int[] numbers, int target) {

        int[] answer=new int[2];

        int x=0, y=numbers.length-1;

        while(x<y)
        {
            if(numbers[x]+numbers[y]==target)
                {
                    answer[0]=x+1;
                    answer[1]=y+1;
                    return answer;
                }
                else if(target>numbers[x]+numbers[y])
                    x++;
                 else
                    y--;   
        }

        answer[0]=-1;
        answer[1]=-1;

        return answer;
    }
}