class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                result.push_back(i);
        }
        int n=result.size();
        if(result.empty()){
            result.push_back(-1);
            result.push_back(-1);
        }
        if(result.size()==1){
            result.push_back(result[0]);
        }
        if(n>=3){
            int a=0;
            for(int i=0;i<=1;i++){
                if(i==0){
                ans.push_back(result[0]);
                }
                if(i==1){
                    ans.push_back(result[n-1]);
                }
            }
            return ans; 
        }
        return result;
    }
};