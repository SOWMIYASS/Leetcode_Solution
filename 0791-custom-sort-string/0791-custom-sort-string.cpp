class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>m;
        string res;
        for(auto i:s) m[i]++;
        for(auto i:order){
            if(m[i]>0){
                res.append(m[i],i);
                m[i]=0;
            }
        }
        for(auto i:m){
            if(i.second>=1){
                 res.append(i.second,i.first);
            }
        }
        return res;
        
    }
};