class Solution {
public:
    void swap(int *p1,int *p2)
    {
        int temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
    void sortColors(vector<int>& nums) {
        int z=0,t=nums.size()-1;
        int i=0;
        while(i<=t){
            if(nums[i]==0) swap(&nums[i++],&nums[z++]);
            else if(nums[i]==1) i++;
            else swap(&nums[i],&nums[t--]);
        }
        
    }
};