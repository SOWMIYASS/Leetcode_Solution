class Solution {
public:
    int mostWordsFound(vector<string>&s) {
        int space_count,result=0;
        for(int i=0;i<s.size();i++){
            space_count=0;
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==' '){
                    space_count++;
                }
            }
            result=max(result,space_count);
        }
        return result+1;
    }
};