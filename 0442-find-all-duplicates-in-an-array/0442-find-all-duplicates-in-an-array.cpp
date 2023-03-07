class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        map<int,int>m;
        for(auto i:nums)
            m[i]=m[i]+1;
        for(auto i:m){
            if(i.second==2)
                result.push_back(i.first);
        }
        return result;
    }
};