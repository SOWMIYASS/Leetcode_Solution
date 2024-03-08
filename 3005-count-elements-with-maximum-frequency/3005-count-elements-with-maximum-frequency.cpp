class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        int count=0;
        int ans=0;
        for(auto i:nums){
            m[i]++;
            if(ans<=m[i]){
                ans=m[i];
            }
        }
        for(auto i:m){
            if(i.second==ans) count+=i.second;
        }
        return count;
    }
};