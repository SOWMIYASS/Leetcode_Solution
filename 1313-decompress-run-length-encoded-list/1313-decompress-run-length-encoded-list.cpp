class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>answer;
        int temp,res;
        for(int i=0;i<nums.size();i=i+2){
            temp=nums[i];
            res=nums[i+1];
            while(temp){
                answer.push_back(res);
                temp--;
            }
        }
        return answer;
    }
};