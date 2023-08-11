class Solution {
public:
    string removeOuterParentheses(string s) {
        int o=0,c=0,i=0;
        stack<char>ans;
        string res1,res2;
        while(i<s.size()){
           if(s[i]=='(') {
               o++;
               ans.push(s[i]);
           }
            else {
                c++;
                ans.push(s[i]);
            }
            i++;
            if(o==c){
                ans.pop();
                string res1="";
                while(ans.size()>1){
                     res1+=ans.top();
                     ans.pop();
                }
                ans.pop();
                reverse(res1.begin(),res1.end());
                res2+=res1;
            }
            
        }
        return res2;
    }
};