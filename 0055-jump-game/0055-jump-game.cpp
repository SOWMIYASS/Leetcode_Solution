class Solution {
public:
    bool canJump(vector<int>& nums) {
        int val=0;
        for(int i=nums.size()-2;i>=0;i--){
            val++;
            if(nums[i]>=val) {
                val=0;
            }
        }
        if(val==0) return true;
        else return false;
        
    }
};