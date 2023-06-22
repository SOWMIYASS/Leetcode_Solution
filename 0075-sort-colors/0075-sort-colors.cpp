class Solution {
public:
    void sortColors(vector<int>& nums) {
        int v=nums.size();
        int i=0,j=0,k=0;
        for(int a=0;a<v;a++){
          if(nums[a]==0) i++;
          else if(nums[a]==1) j++;
          else if(nums[a]==2) k++;
        }
        for(int a=0;a<i;a++)
           nums[a]=0;
        for(int a=i;a<i+j;a++)
            nums[a]=1;
        for(int a=i+j;a<v;a++)nums[a]=2;
        
        
    }
};