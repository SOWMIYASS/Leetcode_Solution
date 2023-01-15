class Solution {
public:
    char findTheDifference(string s, string t) {
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            a+=(int)s[i];
        }
        for(int j=0;j<t.size();j++) b+=(int) t[j];
        return (char)b-a;
    }
};