class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,add=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(nums[i]!=0){
                int m=nums[i]%10;
                add+=m;
                nums[i]=nums[i]/10;
            }
        }
        return abs(sum-add);
    }
};