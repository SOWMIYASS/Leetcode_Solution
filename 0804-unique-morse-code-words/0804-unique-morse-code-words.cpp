class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>m={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>ans;
        string s;
        for(int i=0;i<words.size();i++){
            s=" ";
            for(int j=0;j<words[i].size();j++){
                s=s.append(m[words[i][j]-'a']);
            }
            //cout<<s<<endl;
            ans.insert(s);
        }
        return ans.size();
    }
};