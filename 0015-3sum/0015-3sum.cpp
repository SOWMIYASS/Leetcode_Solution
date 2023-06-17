class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>ans;
        int sum;
        for(int i=0;i<nums.size();i++){
            if(nums.size()<3) return {};
            if(nums[0]>0) return {};
            int k=nums.size()-1;
            int j=i+1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0) 
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        for(auto a:s) ans.push_back(a);
        return ans;
    }
};