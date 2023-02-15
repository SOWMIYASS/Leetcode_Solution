class Solution {
public:
    string replaceDigits(string s) {
     for(int i=0;i<s.size();i++){
         if((i%2)!=0){
             int a=atoi(&s[i]);
             int b=s[i-1];
             s[i]=(char)a+b;
         }
     }
        return s;
    }
};