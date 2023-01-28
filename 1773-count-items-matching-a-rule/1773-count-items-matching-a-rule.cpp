class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for(int i=0;i<items.size();i++){
            if(ruleKey=="color"){
                if(ruleValue==items[i][1])
                  count++;
    
            }
            if(ruleKey=="type"){
                if(ruleValue==items[i][0])
                    count++;
                
            }
            if(ruleKey=="name"){
                if(ruleValue==items[i][2])
                    count++;
                
            }
           
        }
        return count;
    }
};