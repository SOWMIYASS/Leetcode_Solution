class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        map<char,int>m;
        int odd_count=0;
        for(auto i:s){
            m[i]++;
            if(m[i]%2==1) odd_count++;
            else odd_count--;
        }
        if(odd_count>1) return s.size()-odd_count+1;
        else return s.size();
    }
};