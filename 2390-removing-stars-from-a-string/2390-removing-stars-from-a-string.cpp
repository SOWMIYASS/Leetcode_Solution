class Solution {
public:
    string removeStars(string s1) {
        stack<char>s;
        vector<char>v;
        string res;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==(char)42) s.pop();
            else s.push(s1[i]);
        }
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            res.push_back(v[i]);
        }
        return res;
    }
};