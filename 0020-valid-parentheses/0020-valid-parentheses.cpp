class Solution {
public:
    bool isValid(string s) {
        stack<char>result;
        for(auto ch:s){
            if(ch=='('||ch=='{'||ch=='[') result.push(ch);
            else{
                if(result.empty()) return false;
                if(ch==')'){
                    if(result.top()=='(') result.pop();
                    else return false;
                }
                if(ch==']'){
                    if(result.top()=='[') result.pop();
                    else return false;
                }
                if(ch=='}'){
                    if(result.top()=='{') result.pop();
                    else return false;
                }
            }
        }
        if(result.empty()) return true;
        else return false;
    }
};