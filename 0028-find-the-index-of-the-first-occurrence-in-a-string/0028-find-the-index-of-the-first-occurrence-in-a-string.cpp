class Solution {
public:
    int strStr(string h, string n) {
        int n1=h.size();
        int n2=n.size();
        if(n2>n1) return -1;
        int j;
        int count;
        for(int i=0;i<n1;i++){
            j=0;
            if(h[i]==n[j]){
                count=1;
                j=1;
                for(int k=i+1;k<n1;k++){
                    if(h[k]==n[j]){
                        count++;
                        j++;
                        
                    }
                    else
                        break;
                }
                if(count==n2) return i;
            }
        }
        return -1;
        
    }
};