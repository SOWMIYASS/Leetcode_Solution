class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int n=(ruleKey=="type")?0:(ruleKey=="color")?1:2;
        for(auto i:items)
            if(i[n]==ruleValue) count++;
        return count;
                
        
    }
};