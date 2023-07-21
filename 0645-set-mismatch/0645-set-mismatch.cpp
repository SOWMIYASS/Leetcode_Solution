class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>m;
        vector<int>res;
        for(auto i:nums){
            m[i]++;
            if(m[i]==2) res.push_back(i);
        }
        for(int i=1;i<=nums.size();i++) if(m[i]==0) res.push_back(i);
        return res;
    }
};