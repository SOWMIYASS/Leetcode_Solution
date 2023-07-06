class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro1=1,pro2=1;
        int ans=INT_MIN;
        for(int i=0,j=nums.size()-1;i<nums.size(),j>=0;i++,j--){
            pro1*=nums[i];
            pro2*=nums[j];
            ans=max({pro1,pro2,ans});
            if(pro1==0) pro1=1;
            if(pro2==0) pro2=1;
        }
        return ans;
    }
};