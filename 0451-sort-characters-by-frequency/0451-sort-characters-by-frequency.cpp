class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        string res;
        vector<pair<int,char>>v;
        for(auto i:s) m[i]++;
        for(auto i:m) v.push_back({i.second,i.first});
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        for(auto i:v) res+=string(i.first,i.second);
        return res;
    }
};