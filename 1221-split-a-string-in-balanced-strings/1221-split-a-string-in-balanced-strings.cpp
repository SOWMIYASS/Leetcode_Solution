class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') l++;
            else l--;
            if(l==0) count++;
        }
        return count;
    }
};