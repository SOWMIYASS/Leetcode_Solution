class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            if(m.count(i)) return true;
            m[i]=m[i]+1;
            
        }
     return false;   
    }
};