class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>productToleft(n);
        vector<int>productToright(n);
        
        
        productToleft[0]=1;
        for(int i=1;i<nums.size();i++)
            productToleft[i]=productToleft[i-1]*nums[i-1];
        
        productToright[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--)
            productToright[i]=productToright[i+1]*nums[i+1];
        
        for(int i=0;i<nums.size();i++){
            ans[i]=productToleft[i]*productToright[i];
        }
        return ans;
    }
};