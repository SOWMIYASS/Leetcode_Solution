class Solution {
public:
    void find_combo(map<char,string>&m,int curr,string digits,string &s,vector<string> &ans){
        if(curr>=digits.size()){
            ans.push_back(s);
            return;
        }
        char currnum=digits[curr];
        string letter=m[currnum];
        for(int i=0;i<letter.size();i++){
            s.push_back(letter[i]);
            find_combo(m,curr+1,digits,s,ans);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char,string>m={
            {'1',""},
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"},
        };
        vector<string>ans;
        string s="";
        if(digits.size()==0) return ans;
        find_combo(m,0,digits,s,ans);
        return ans;
    }
}; 