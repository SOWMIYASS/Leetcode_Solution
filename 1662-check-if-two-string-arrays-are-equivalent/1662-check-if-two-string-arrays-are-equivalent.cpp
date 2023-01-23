class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s="",a="";
        for(int i=0;i<w1.size();i++){
             s.append(w1[i]);
        }
        for(int j=0;j<w2.size();j++){
            a.append(w2[j]);
        }
        if(s==a)
            return true;
        return false;
    }
};