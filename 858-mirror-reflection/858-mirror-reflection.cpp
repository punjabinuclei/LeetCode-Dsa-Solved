class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        int reflection=p, extension=q;
        
        
        while(reflection%2==0 && extension%2==0)
        {
            extension/=2;
            reflection/=2;
        }
        
        if(extension%2==0 && reflection%2!=0)
            return 0;
       else if(extension%2!=0 && reflection%2==0)
            return 2;
        else if(extension%2!=0 && reflection%2!=0)
            return 1;
        
        
        return -1;
        
    }
};