class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2) return 0;
        int result;
        int val=INT_MIN;
        for(int i=1;i<nums.size();i++){
            result=nums[i]-nums[i-1];
            val=max(val,result);
        }
        return val;
    }
};