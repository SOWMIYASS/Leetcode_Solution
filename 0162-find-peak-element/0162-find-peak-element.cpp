class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int val=0;
        int find=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(find<nums[i]){
                find=nums[i];
                val=i;
            }
        }
        return val;
    }
};