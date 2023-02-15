class Solution {
public:
    bool checkIfPangram(string sentence) {
        int flag=0;
        int i;
        int hash[26]={0};
        for(auto ch:sentence){
            ++hash[ch-'a'];
        }
        for(i=0;i<26;i++){
            if(hash[i]==0)
                flag=1;
            
        }
        if(flag==0) 
            return 1;
        else
           return 0;
    }
};