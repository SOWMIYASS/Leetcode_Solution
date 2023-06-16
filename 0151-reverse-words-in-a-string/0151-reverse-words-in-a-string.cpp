class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0) return s;
        stack<string>ans;
        string res="";
        for(int i=0;i<s.size();i++){
            string word;
            if(s[i]==' ') continue;
            else{
               while(i<s.size()&&s[i]!=' '){
                word+=s[i];
                i++;
            }
            }
            ans.push(word);   
        }
        while(!ans.empty()){
            res+=ans.top();
            ans.pop();
            if(!ans.empty()) res+=' ';
        }
        return res;
    }
};