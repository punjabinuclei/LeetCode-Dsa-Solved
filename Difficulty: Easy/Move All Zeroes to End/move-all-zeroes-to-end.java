class Solution {
    void pushZerosToEnd(int[] arr) {
        
        ArrayList<Integer>store=new ArrayList<>();
        
        for(int x:arr)
        {
            if(x!=0)
            {
                store.add(x);
            }
        }
        
        
        for(int i=0;i<store.size();i++)
        {
            arr[i]=store.get(i);
        }
        
        for(int i=store.size();i<arr.length;i++)
        {
            arr[i]=0;
        }
    }
}