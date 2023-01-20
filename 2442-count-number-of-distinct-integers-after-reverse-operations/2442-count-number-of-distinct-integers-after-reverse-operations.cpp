class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int count=0,r,m1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            r=0;
            int k=nums[i];
            while(k){
                m1=k%10;
                r=r*10+m1;
                k/=10;
            }
            nums.push_back(r);
        }
            unordered_map<int,int>m;
            for(auto i:nums)
                m[i]=m[i]+1;
            for(auto i:m){
                if(i.second>=1)
                    count++;
            }
        return count;
    }
};