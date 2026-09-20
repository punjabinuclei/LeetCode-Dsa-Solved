class Solution {
    static ArrayList<Integer> intersection(int arr1[], int arr2[]) {
        
        ArrayList<Integer>answer=new ArrayList<>();
        
        HashSet<Integer>set=new HashSet<>();
        
        
        for(int i=0;i<arr2.length;i++)
        {
            set.add(arr2[i]);
        }
        
        for(int i=0;i<arr1.length;i++)
        {
            if(set.contains(arr1[i]))
            {
                answer.add(arr1[i]);
                set.remove(arr1[i]);
            }
        }
        
        
        
        return answer;
        
    }
}
