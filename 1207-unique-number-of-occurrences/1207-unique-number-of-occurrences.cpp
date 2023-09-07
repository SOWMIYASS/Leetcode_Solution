class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        set<int>s;
        for(auto i:arr){
            m[i]++;
        }
        for(auto i:m) s.insert(i.second);
        if(m.size()==s.size()) return true;
        else return false;
    }
};