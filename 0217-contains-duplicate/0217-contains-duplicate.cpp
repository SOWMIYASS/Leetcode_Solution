class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)
            m[i]=m[i]+1;
        for(auto j:m){
            if(j.second>=2){
                return true;
            }
        }
     return false;   
    }
};