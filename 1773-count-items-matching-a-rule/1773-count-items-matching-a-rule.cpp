class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int a=(ruleKey=="type")?0:(ruleKey=="color")?1:2;
        for(auto i:items) if(i[a]==ruleValue) count++;
        return count;
                
        
    }
};