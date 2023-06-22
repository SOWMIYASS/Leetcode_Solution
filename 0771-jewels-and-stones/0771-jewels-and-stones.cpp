class Solution {
public:
    int numJewelsInStones(string s, string t) {
        map<char,int>m;
        int res=0;
        for(auto i:t)
            m[i]++;
        for(auto i:s)
            if(m.count(i)) res+=m[i];
        return res;
        
    }
};