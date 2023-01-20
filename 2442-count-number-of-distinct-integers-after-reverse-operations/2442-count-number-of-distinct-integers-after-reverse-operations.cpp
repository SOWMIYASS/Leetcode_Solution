class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size(),m,r=0;
        unordered_set<int>m1;
        for(int i=0;i<n;i++){
            if(nums[i]<10) m1.insert(nums[i]);
            else{
                r=0;
                m1.insert(nums[i]);
                while(nums[i]){
                    m=nums[i]%10;
                    r=r*10+m;
                    nums[i]/=10;
                }
                m1.insert(r);
            }
        }
        return m1.size();
    }
};