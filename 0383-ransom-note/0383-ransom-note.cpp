class Solution {
public:
    bool canConstruct(string r, string m) {
        int count=0;
        if(r.size()>m.size()) return false;
        sort(r.begin(),r.end());
        sort(m.begin(),m.end());
        if(r==m) return true;
        for(int i=0;i<m.size();i++){
            if(r[count]==m[i]) count++;
            if(count==r.size()) return true;
        }
        return false;
    }
};