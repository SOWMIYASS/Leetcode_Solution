class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int l=0;
        vector<int>answer;
        for(auto i:nums)
            sum+=i;
        for(auto i:nums){
            sum-=i;
            answer.push_back(abs(l-sum));
            l+=i;
        }
        return answer;
    }
};