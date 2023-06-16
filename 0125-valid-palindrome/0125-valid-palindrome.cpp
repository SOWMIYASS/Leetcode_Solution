class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        if(s.size()==1) return true;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65&&s[i]<=90)s[i]=s[i]+32;
            //if(s[i]>=48&&s[i]<=57) return false;
            if(s[i]==' ')continue;
            if((s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)) s1+=s[i];
         }
        cout<<s1;
         int i=0;
         int j=s1.size()-1;
         while(i<j){
             if(s1[i]!=s1[j]) return false;
             i++;
             j--;
         }
        return true;
    }
};