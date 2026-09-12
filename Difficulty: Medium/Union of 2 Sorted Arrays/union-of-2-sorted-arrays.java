class Solution {
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
          
          HashSet<Integer>set=new HashSet<>();
        
        for(int i=0;i<a.length;i++)
        {
            set.add(a[i]);
        }
        
        for(int i=0;i<b.length;i++)
        {
            set.add(b[i]);
        }
        
        ArrayList<Integer>ans=new ArrayList<>();
        for(int x:set)
        {
            ans.add(x);
        }
        
       Collections.sort(ans);
        
        
        return ans;
        
    }
}
